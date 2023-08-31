#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is full, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    /* check if tree is NULL */
    if (tree == NULL)
        return (0);

    /* check if tree is a leaf */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* check if tree has two children */
    if (tree->left != NULL && tree->right != NULL)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    return (0);
}
