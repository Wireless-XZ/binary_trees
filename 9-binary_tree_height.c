#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the heigh
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	height = helper(tree);
	return (height == 0 ? 0 : height - 1);
}

/**
 * helper - help the binary-tree-height function
 * @tree: a pointer to the root node of the tree to measure the heigh
 * Return: height of tree
 */
size_t helper(const binary_tree_t *tree)
{
	int right, left;

	if (!tree)
		return (0);

	left = helper(tree->left);
	right = helper(tree->right);
	return ((left > right ? left : right) + 1);
}
