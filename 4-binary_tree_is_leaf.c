#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This function checks if a node is a leaf
 * @node: node
 * Return: Either 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if(!node)
		return (0);
	if(!node->left && !node->right)
		return (1);
	return (0);
}
