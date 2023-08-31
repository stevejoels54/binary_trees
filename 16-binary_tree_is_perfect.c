#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t depth, size;

    /* check if tree is NULL */
    if (tree == NULL)
        return (0);

    /* compute the depth of the tree */
    depth = binary_tree_depth(tree);

    /* compute the size of the tree */
    size = binary_tree_size(tree);

    /* check if tree is perfect */
    if (size == (2 << depth) - 1)
        return (1);

    return (0);
}
