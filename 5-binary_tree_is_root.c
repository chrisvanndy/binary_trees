#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks to see if node is a root.
 * @node: pointer to node of tree to check
 * Return: 0 (Success)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* if node is null return 0 */
	if (!node)
		return (0);

	/* if node->parent is NOT null, we know it's a child */
	if (node->parent != NULL)
		return (0);

	else
		return (1);
}
