#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes and frees a tree.
 * @tree: pointer to root node of tree to delete
 * Return: Always 0 (Success)
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);

}
