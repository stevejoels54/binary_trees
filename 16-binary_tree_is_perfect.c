#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node of the tree to check
 * Return: 1 if tree is perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	return (size == (2 << height) - 1);

	return (0);
}

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to root node of the tree to measure the height
 * Return: height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (tree == NULL)
		return (0);

	lheight = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	rheight = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (lheight > rheight ? lheight : rheight);

	return (0);
}

/**
 * binary_tree_size - measures height of a binary tree
 * @tree: pointer to root node of the tree to measure the height
 * Return: height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
