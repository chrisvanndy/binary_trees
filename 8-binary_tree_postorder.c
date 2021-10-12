#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - prints binary tree in order.
 * @tree: pointer to root node of tree to print
 * @func: function to determine order
 * Return: 0 (Success)
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
