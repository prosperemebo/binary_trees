#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - This function checks if a node is a leaf
 * @node: node
 * Returns: Either 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if(!node)
		return (0);
	if(!node->left && !node->right)
		return (1);
	else
		return (0);
}
