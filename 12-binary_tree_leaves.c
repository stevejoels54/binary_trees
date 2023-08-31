#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves in
 * Return: number of leaves in the tree, or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t leaves;

    /* check if tree is NULL */
    if (tree == NULL)
        return (0);

    /* check if tree is a leaf */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* count the leaves in each subtree */
    leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

    return (leaves);
}
