#include "binary_trees.h"

void check_full(const binary_tree_t *tree, int *ptr);

/**
 * binary_tree_is_full -  a function that checks if a binary tree is ful
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if full, 0 otherwise or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (!tree)
		return (0);

	check_full(tree, &full);
	return (full);
}

/**
 * check_full - checks if a node is free
 * @tree: a pointer to the node to check
 * @ptr: a pointer to record if full or not
 */
void check_full(const binary_tree_t *tree, int *ptr)
{
	if (tree)
	{
		if ((tree->left && tree->right))
		{
			check_full(tree->left, ptr);
			check_full(tree->right, ptr);
		}
		else if ((tree->left || tree->right))
			*ptr = 0;
		else
			*ptr = 1;
	}
}
