#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks to see if node is a leaf.
 * @node: pointer to node of tree to check
 * Return: 0 (Success)
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* if the pointer to node is null, return 0 */
	if (!node)
		return (0);

	/* if the node has two null links, return 1 (is a leaf) */
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_size - prints number of nodes in tree.
 * @tree: pointer to root node of tree to print
 * Return: 0 (Success)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* if the pointer to the root node is null, return 0. */
	if (!tree)
		return (0);

	/* call the function above which indicates if node is leaf */
	if (binary_tree_is_leaf(tree) == 1)
		/* if the node is a leaf, return 1. */
		return (1);
	
	/* return nodes that are */
	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
