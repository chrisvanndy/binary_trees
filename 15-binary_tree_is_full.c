#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * check_isFull - checks to see if nodes subtree is full.
 * @node: pointer to node of tree to check
 * Return: 1 if full, 0 if not.
 */

int check_isFull(const  binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);

	else if (node->left != NULL && node->right != NULL)
		return (check_isFull(node->left) && check_isFull(node->right));

	return (0);
}
/**
 * binary_tree_is_full - returns bool wether nodes subtree is full.
 * @tree: pointer to root node of tree to print
 * Return: 0 (false) 1 (true)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (check_isFull(tree));
}
