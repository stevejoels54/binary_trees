#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to root node of the tree to measure the height
 * Return: height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t lheight, rheight;

    if (tree == NULL)
        return (0);

    if (tree->right == NULL && tree->left == NULL)
        return (0);

    lheight = binary_tree_height(tree->left);
    rheight = binary_tree_height(tree->right);

    if (lheight >= rheight)
        return (lheight + 1);
    else
        return (rheight + 1);
}
