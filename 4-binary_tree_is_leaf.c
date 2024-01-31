#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if the node is leaf or not
 * @node: the node to be checked
 *
 * Return: 1 if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}
