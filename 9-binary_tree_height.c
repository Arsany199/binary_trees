#include "binary_trees.h"

/**
 * binary_tree_height - determine the hight of a tree
 * @tree: pointer to the root node
 * Return: the hight
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		l = binary_tree_height(tree->left) + 1;
	if (tree->right)
		r = binary_tree_height(tree->right) + 1;
	if (r > l)
		return (r);
	return (l);
}
