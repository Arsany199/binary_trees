#include "binary_trees.h"

/**
 * binary_tree_depth - determine the depth of a node in which level
 * @tree: pointer to the node to be measured
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		d = binary_tree_depth(tree->parent) + 1;

	return (d);
}
