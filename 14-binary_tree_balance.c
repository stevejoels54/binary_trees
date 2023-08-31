#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height, right_height;

    /* check if tree is NULL */
    if (tree == NULL)
        return (0);

    /* check if tree is a leaf */
    if (tree->left == NULL && tree->right == NULL)
        return (0);

    /* compute the height of each subtree */
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    /* return the balance factor of the tree */
    return (left_height - right_height);
}
