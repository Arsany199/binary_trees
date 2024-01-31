#include "binary_trees.h"

/**
 * binary_tree_height_balance - measures the balance of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height
 */

size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		l = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		r = 1 + binary_tree_height_balance(tree->right);

	if (r > l)
		return (r);
	return (l);
}

/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		l = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		r = 1 + binary_tree_height_balance(tree->right);
	return (l - r);
}
