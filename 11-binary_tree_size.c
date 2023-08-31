#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    /* check if tree is NULL */
    if (tree == NULL)
        return (0);

    /* check if tree is a leaf */
    if (tree->left == NULL && tree->right == NULL)
        return (0);

    /* compute the height of each subtree */
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    /* return the height of the larger subtree, plus 1 for the root */
    if (left_height >= right_height)
        return (left_height + 1);
    else
        return (right_height + 1);
}
