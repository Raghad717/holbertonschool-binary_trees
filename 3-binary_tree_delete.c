#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_delete - Deletes an entire binary tree
* @tree: Pointer to the root node of the tree to delete
*
* Description: If tree is NULL, do nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
/* Check if tree is NULL */
if (tree == NULL)
return;

/* Recursively delete the left subtree */
binary_tree_delete(tree->left);

/* Recursively delete the right subtree */
binary_tree_delete(tree->right);

/* Free the current node */
free(tree);
}
