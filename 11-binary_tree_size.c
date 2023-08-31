#include "binary_trees.h"

/**
 * binary_tree_size - finds size of a binary tree
 * @tree: pointer to root node of the tree to measure the height
 * Return: height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size + 1);
}
