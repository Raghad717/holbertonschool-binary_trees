#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: Height of the tree, or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

/* Check if tree is NULL */
if (tree == NULL)
return (0);

/* If node is a leaf, return 0 */
if (tree->left == NULL && tree->right == NULL)
return (0);

/* Recursively calculate the height of left subtree */
left_height = binary_tree_height(tree->left);

/* Recursively calculate the height of right subtree */
right_height = binary_tree_height(tree->right);

/* Return the maximum height plus 1 for the current node */
if (left_height > right_height)
return (left_height + 1);
else
return (right_height + 1);
}
