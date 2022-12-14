#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: number of node with 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	if (tree && (tree->left || tree->right))
		return ((left + right) + 1);
	else
		return (left + right);
}
