#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - This function creates a binary tree node
 * @parent: Parent pointer
 * @value: Value
 * Return: Pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
