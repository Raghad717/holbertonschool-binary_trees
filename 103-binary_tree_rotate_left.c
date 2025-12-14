#include "binary_trees.h"

/**
* binary_tree_rotate_left - Performs a left-rotation on a binary tree
* @tree: Pointer to the root node of the tree to rotate
*
* Return: Pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *pivot, *tmp;

if (tree == NULL || tree->right == NULL)
return (tree);

pivot = tree->right;
tmp = pivot->left;

/* Perform rotation */
pivot->left = tree;
tree->right = tmp;

/* Update parent pointers */
if (tmp != NULL)
tmp->parent = tree;

pivot->parent = tree->parent;
tree->parent = pivot;

/* Update parent's child pointer */
if (pivot->parent != NULL)
{
if (pivot->parent->left == tree)
pivot->parent->left = pivot;
else
pivot->parent->right = pivot;
}

return (pivot);
}
