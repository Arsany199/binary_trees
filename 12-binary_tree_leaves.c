#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaf of a tree
 * @tree: pointer to the root
 * Return: the number of leafs
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left) == NULL && (tree->right) == NULL)
		return (1);

	i += binary_tree_leaves(tree->left);
	i += binary_tree_leaves(tree->right);
	return (i);
}
