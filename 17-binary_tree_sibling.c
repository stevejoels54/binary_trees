#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node, or NULL if no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    /* check if node is NULL */
    if (node == NULL)
        return (NULL);

    /* check if node has no parent */
    if (node->parent == NULL)
        return (NULL);

    /* check if node is left child */
    if (node->parent->left == node)
        return (node->parent->right);

    /* check if node is right child */
    if (node->parent->right == node)
        return (node->parent->left);

    return (NULL);
}
