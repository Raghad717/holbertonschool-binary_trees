#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, 0 if tree is NULL
 *
 * Description: Depth is the number of edges from the node to the root
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
        return (0);

    /* Traverse up to the root, counting each parent */
    while (tree->parent != NULL)
    {
        depth++;
        tree = tree->parent;
    }

    return (depth);
}
