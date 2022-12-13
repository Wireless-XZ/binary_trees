#include "binary_trees.h"

/**
 * binary_tree_delete -  a function that deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree)
	{
		left = tree->left;
		right = tree->right;

		if (right)
			binary_tree_delete(right);
		if (left)
			binary_tree_delete(left);
		free(tree);
	}
}
