#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes and frees a tree.
 * @tree: pointer to root node of tree to delete
 * Return: Always 0 (Success)
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	/* because we have a pointer to a trees root */
	/* we also R + L pointers to other nodes of the tree */
	/* by using recursion we can traverse all nodes in tree */
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	free(tree);
}
