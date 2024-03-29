#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer at the root of the tree
 * Return: 1 if full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);

	else
	{
		if (tree->left && tree->right)
		{
			l = binary_tree_is_full(tree->left);
			r = binary_tree_is_full(tree->right);
			if (l == 0 || r == 0)
			{
				return (0);
			}
			return (1);
		}
		else if ((tree->left == NULL) && (tree->right == NULL))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
