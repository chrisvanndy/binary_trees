#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - instantiate a binary tree
 * @binary_tree_t: pointer to parent node
 * @value: value to store in node
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t* result = malloc(sizeof(binary_tree_t));
    if (result != NULL)
    {
        result->parent = parent;
        result->right = NULL;
        result->left = NULL;
        result->n = value;
    }

    return result;
}
