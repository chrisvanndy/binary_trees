#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - prints binary tree height from node.
 * @tree: pointer to root node of tree to print
 * Return: 0 (Success)
 */

size_t binary_tree_bheight(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else
	{
		size_t rHeight = binary_tree_bheight(tree->right);
		size_t lHeight = binary_tree_bheight(tree->left);

		if (rHeight > lHeight)
			return (rHeight + 1);
		return (lHeight + 1);
	}
}

/**
 * binary_tree_balance - returns the balance factor of a node.
 * @tree: pointer to node of tree to check balance factor
 * Return: 0 (Success)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else
	{
		size_t lHeight = binary_tree_bheight(tree->left);
		size_t rHeight = binary_tree_bheight(tree->right);
		
		return (lHeight - rHeight);
	}
}
