#include "binary_trees.h"

/**
 * compare - compare the size of the tree
 * @tree: pointer to the root
 * Return:size
 */
int compare(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (compare(tree->left) + 1 + compare(tree->right));
	}
}
/**
 * binary_tree_is_perfect - checks if the tree is perfectly symetric
 * @tree: pointer to the root
 * Return: 1 if perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree && (!tree->left && !tree->right))
	{
		return (1);
	}

	l = compare(tree->left);
	r = compare(tree->right);
	if ((l - r) == 0)
		return (1);
	return (0);
}
