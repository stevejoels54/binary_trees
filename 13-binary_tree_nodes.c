#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes in
 * Return: number of nodes with at least 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes;

    /* check if tree is NULL */
    if (tree == NULL)
        return (0);

    /* check if tree is a leaf */
    if (tree->left == NULL && tree->right == NULL)
        return (0);

    /* count the nodes in each subtree */
    nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

    /* add 1 for the root */
    return (nodes + 1);
}
