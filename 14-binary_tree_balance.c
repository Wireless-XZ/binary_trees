#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	left = left_helper(tree->left);
	right = right_helper(tree->right);
	return (left - right);
}

/**
 * left_helper - a helpig function
 * @tree: pointer to the tree node
 * Return: number of nodes
 */
int left_helper(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (left_helper(tree->left) + 1);
}


/**
 * right_helper - a helpig function
 * @tree: pointer to the tree node
 * Return: number of nodes
 */
int right_helper(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (right_helper(tree->right) + 1);
}
