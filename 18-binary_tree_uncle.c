#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node, or NULL if no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    /* check if node is NULL */
    if (node == NULL)
        return (NULL);

    /* check if node has no parent */
    if (node->parent == NULL)
        return (NULL);

    /* check if node has no grandparent */
    if (node->parent->parent == NULL)
        return (NULL);

    /* check if node's parent is left child */
    if (node->parent->parent->left == node->parent)
        return (node->parent->parent->right);

    /* check if node's parent is right child */
    if (node->parent->parent->right == node->parent)
        return (node->parent->parent->left);

    return (NULL);
}
