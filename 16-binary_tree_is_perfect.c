#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_bfHeight - prints binary tree height from node.
 * @tree: pointer to root node of tree to print
 * Return: 0 (Success)
 */

size_t binary_tree_bfHeight(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else
	{
		size_t rHeight = binary_tree_bfHeight(tree->right);
		size_t lHeight = binary_tree_bfHeight(tree->left);

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
		size_t lHeight = binary_tree_bfHeight(tree->left);
		size_t rHeight = binary_tree_bfHeight(tree->right);

		return (lHeight - rHeight);
	}
}

/**
 * check_perf - checks perectness of tree
 * @tree: tree node passed
 * Return: 1 if perfect, 0 if not
 */

int check_perf(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if ((tree->left == NULL && tree->right == NULL) ||
			(tree->left != NULL && tree->right != NULL))
	{
			return (binary_tree_is_perfect(tree->right) &&
					binary_tree_is_perfect(tree->left));
	}

	return (0);
}
/**
 * binary_tree_is_perfect - checks for perfectness of tree
 * @tree: the tree
 *
 * Return: 1 if perfect or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
		
	if (binary_tree_balance(tree) == 0 && check_perf(tree))
		return (1);

	return (0);
}
