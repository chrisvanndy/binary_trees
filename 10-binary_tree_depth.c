#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - prints binary tree from a node.
 * @tree: pointer to root node of tree to print
 * Return: 0 (Success)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	else
	{
		size_t depth = binary_tree_depth(tree->parent);

		return (depth + 1);
	}
}
