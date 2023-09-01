#include "binary_trees.h"

/**
 * binary_tree_nodes - This function counts the nodes with
 * at least 1 child in a binary tree
 * @tree: input tree
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	count++;
	if (tree->left)
		count += binary_tree_nodes(tree->left);
	if (tree->right)
		count += binary_tree_nodes(tree->right);
	return (count);
}
