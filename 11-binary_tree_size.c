#include "binary_trees.h"

/**
 * binary_tree_size - determine the size of my tree
 * @tree: pointer to the root
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t my_left = 0, my_right = 0, size = 0;

	if (tree)
	{
		my_left = binary_tree_size(tree->left);
		my_right = binary_tree_size(tree->right);
		size = my_left + my_right + 1;
	}
	return (size);
}
