#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse the tree (left, root, right)
 * @tree: pointer to the root
 * @func: pointer to call a function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
