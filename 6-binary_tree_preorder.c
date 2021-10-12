#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - prints binary tree in logical order.
 * @tree: pointer to root node of tree to print
 * @func: function to determine order
 * Return: 0 (Success)
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* print the root nodes ->n value */
	(func)(tree->n);
	/* recursively print left / right node->n value */
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
