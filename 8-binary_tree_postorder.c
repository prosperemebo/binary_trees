#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - This function that goes through a
 * binary tree using post-order traversal
 * @tree: Input tree
 * @func: Printing handler
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
