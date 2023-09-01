#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - This function checks if a given
 * node is a root
 * @node: node
 * Returns: Either 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if(!node)
		return (0);
	if(!node->parent)
		return (1);
	return (0);
}
