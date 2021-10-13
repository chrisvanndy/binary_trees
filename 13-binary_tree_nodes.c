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
	if (!node)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_nodes- prints number of nodes in tree.
 * @tree: pointer to root node of tree to print
 * Return: 0 (Success)
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* if the tree is null, return nothing. */
	if (!tree)
		return (0);

	/* if the node is a leaf, return 0 */
	if (binary_tree_is_leaf(tree) == 1)
		return (0);

	/* recursively iterate through each branch of the tree and add nodes */
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
