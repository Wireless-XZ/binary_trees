#include "binary_trees.h"

/**
 * binary_tree_size -  a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: size of tree or 0 if !tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	binary_tree_t *holder;

	if (tree)
	{
		holder = (binary_tree_t *) tree;
		while (holder)
		{
			++size;
			holder = holder->left;
		}
		holder = (binary_tree_t *) tree;
		while (holder)
		{
			++size;
			holder = holder->right;
		}
	}

	return (--size);
}
