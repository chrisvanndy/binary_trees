#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node to via the left link
 * @parent: pointer to parent node
 * @value: value to store in node
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *result = NULL;

	if (parent == NULL)
		return (NULL);

	result = binary_tree_node(parent, value);
	if (result != NULL)
	{
		result->left = parent->left;

		if (result->left)
			result->left->parent = result;

		parent->left = result;
	}

	return (result);
}
