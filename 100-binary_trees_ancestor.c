#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: the ansector
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	       	const binary_tree_t *second)
{
	const binary_tree_t *fir, *sec;

	for (fir = first; fir; fir = fir->parent)
		for (sec = second; sec; sec = sec->parent)
			if (fir == sec)
				return ((binary_tree_t *)fir);
	return (NULL);
}
