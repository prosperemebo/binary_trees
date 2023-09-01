#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - This function that goes through a
 * binary tree using pre-order traversal
 * @tree: Input tree
 * @func: Printing handler
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
