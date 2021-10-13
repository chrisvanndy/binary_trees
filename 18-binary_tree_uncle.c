#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - returns the value of sibling node
 * @node: pointer to root node of tree to print
 * Return: value at sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);

	if (node->parent->right == NULL || node->parent->left == NULL)
		return (NULL);

	if (node->parent->left->n == node->n)
	{
		return (node->parent->right);
	}

	return (node->parent->left);

}

/**
 * binary_tree_uncle - returns the value of uncle node
 * @node: pointer to root node of tree to print
 * Return: value at sibling node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));

}
