#include "binary_trees.h"

void count(const binary_tree_t *tree, size_t *size);

/**
 * binary_tree_size -  a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: size of tree or 0 if !tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	count(tree, &size);
	return (size);
}

/**
 * count - counts items in a tree
 * @tree: a pointer to the root node of the tree to count
 * @size: pointer to the counter
 */
void count(const binary_tree_t *tree, size_t *size)
{
	if (tree)
	{
		count(tree->left, size);
		++(*size);
		count(tree->right, size);
	}
}
