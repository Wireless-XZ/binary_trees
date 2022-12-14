#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a node to a tree
 * Return: 1 full or 0 not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return check_full(tree);
}


/**
 * check_full - a helping function
 * @tree: a node to a tree
 * Return: 1 or 0
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
