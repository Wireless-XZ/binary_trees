#include "binary_trees.h"

/**
 * binary_tree_is_perfect - measures the balance factor of a tree
 * @tree:  a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, hleft, hright;

	if (!tree)
		return (0);

	left = check_full(tree->left);
	right = check_full(tree->right);
	hleft = node_height(tree->left);
	hright = node_height(tree->right);
	return ((left + right == 2) && (hleft == hright) ? 1 : 0);
}

/**
 * check_full - a helpig function
 * @tree: pointer to the tree node
 * Return: number of nodes
 */
int check_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (1);

	left = check_full(tree->left);
	right = check_full(tree->right);

	if (tree && ((!tree->right && !tree->left) || (tree->left && tree->right)))
		return (left && right ? 1 : 0);
	return (0);
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
