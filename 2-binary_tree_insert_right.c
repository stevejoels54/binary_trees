#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to node to insert right-child in
 * @value: value to store in new node
 * Return: pointer to created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = NULL;

    if (parent == NULL)
        return (NULL);

    new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
        return (NULL);

    new_node->n = value;

    new_node->left = NULL;
    new_node->right = NULL;

    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }

    parent->right = new_node;
    new_node->parent = parent;

    return (new_node);
}
