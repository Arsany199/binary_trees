#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at the right of the parent node
 * @parent: pointer to the parent node
 * @value: the value to put in the new node
 *
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *pright = NULL, *new = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	pright = parent->right;
	parent->right = new;

	if (pright)
	{
		pright->parent = new;
		new->right = pright;
	}
	return (new);
}
