#include "binary_trees.h"

/**
* binary_tree_postorder - Goes through a binary tree using post-order traversal
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function to call for each node
*
* Description: The value in each node is passed as a parameter to func.
* If tree or func is NULL, do nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
/* Check if tree or func is NULL */
if (tree == NULL || func == NULL)
return;

/* Traverse left subtree */
binary_tree_postorder(tree->left, func);

/* Traverse right subtree */
binary_tree_postorder(tree->right, func);

/* Process current node (post-order: left, right, root) */
func(tree->n);
}
