#include "binary_trees.h"


/**
 * binary_tree_is_full - This function checks if
 * a binary tree is full
 * @tree: the binary tree
 * Return: 0 (not full) | 1 (full)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_count = 0, right_count = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		left_count = binary_tree_is_full(tree->left);
		right_count =  binary_tree_is_full(tree->right);
	}
	if (left_count == 0 || right_count == 0)
		return (0);

	return (1);
}
