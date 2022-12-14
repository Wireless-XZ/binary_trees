#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that measures the balance factor of a tree
 * @node:  a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent ||
	    !node->parent->parent->left || !node->parent->parent->left)
		return (NULL);

	return (node->parent->n == node->parent->parent->left->n ?
		node->parent->parent->right : node->parent->parent->left);
}
