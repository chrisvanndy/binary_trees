#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - prints binary tree height from node.
 * @tree: pointer to root node of tree to print
 * Return: 0 (Success)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (tree->right == NULL && tree->left == NULL))
		return (0);

	size_t rHeight = binary_tree_height(tree->right);
	size_t lHeight = binary_tree_height(tree->left);

	if (rHeight > lHeight)
		return (rHeight + 1);
	else
		return (lHeight + 1);

}
