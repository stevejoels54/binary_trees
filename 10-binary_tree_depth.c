#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node in a binary tree
 * @node: pointer to node to measure the depth
 * Return: depth of the node, or 0 if node is NULL
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
    size_t depth;

    if (node == NULL)
        return (0);

    depth = binary_tree_depth(node->parent);

    return (depth + 1);
}
