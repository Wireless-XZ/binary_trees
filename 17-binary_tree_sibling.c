#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that measures the balance factor of a tree
 * @node:  a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->left || !node->parent->right)
		return (NULL);
	return (node->n == node->parent->left->n ? node->parent->right :
		node->parent->left);
}
