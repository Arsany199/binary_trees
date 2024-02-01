#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find the sibling of a node
 * @node: the node to find it's sibling
 * Return: the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
