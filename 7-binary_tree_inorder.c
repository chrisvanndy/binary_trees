#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - prints binary tree in order.
 * @tree: pointer to root node of tree to print
 * @func: function to determine order
 * Return: 0 (Success)
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	(func)(tree->n);
	binary_tree_inorder(tree->right, func);
}
