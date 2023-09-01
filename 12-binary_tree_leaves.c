#include "binary_trees.h"

/**
 * binary_tree_leaves - This function counts the leaves in a binary tree
 * @tree: input tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		leaves = 1;
	leaves += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}
