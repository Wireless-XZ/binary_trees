#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of a tree
 * @tree:  a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = node_height(tree->left);
	right = node_height(tree->right);
	return (left - right);
}

/**
 * node_height - a helpig function
 * @tree: pointer to the tree node
 * Return: number of nodes
 */
int node_height(const binary_tree_t *tree)
{
	int right, left;

	if (!tree)
		return (0);

	left = node_height(tree->left);
	right = node_height(tree->right);
	return ((left > right ? left : right) + 1);
}
