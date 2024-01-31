#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node on the left of the root
 * @parent: pointer to the parent node
 * @value: the value to put in the node
 *
 * Return: the new left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_left = binary_tree_node(parent, value);
	if (new_left == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		parent->left->parent = new_left;
	}
	parent->left = new_left;
	return (new_left);
}
