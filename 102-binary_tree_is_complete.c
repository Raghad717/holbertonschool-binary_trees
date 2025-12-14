#include "binary_trees.h"

/**
* binary_tree_is_complete - Checks if a binary tree is complete
* @tree: Pointer to the root node of the tree to check
*
* Return: 1 if the tree is complete, 0 otherwise
*         If tree is NULL, return 0
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
const binary_tree_t **queue;
int front = 0, rear = 0;
int flag = 0; /* Flag to indicate if we've seen a non-full node */
const binary_tree_t *current;

if (tree == NULL)
return (0);

/* Allocate memory for queue (assuming max 1024 nodes) */
queue = malloc(sizeof(binary_tree_t *) * 1024);
if (queue == NULL)
return (0);

queue[rear++] = tree;

while (front < rear)
{
current = queue[front++];

/* Check left child */
if (current->left != NULL)
{
/* If we've already seen a non-full node, then this tree is not complete */
if (flag)
{
free(queue);
return (0);
}
queue[rear++] = current->left;
}
else
{
flag = 1; /* Mark that we've seen a node without left child */
}

/* Check right child */
if (current->right != NULL)
{
/* If we've already seen a non-full node, then this tree is not complete */
if (flag)
{
free(queue);
return (0);
}
queue[rear++] = current->right;
}
else
{
flag = 1; /* Mark that we've seen a node without right child */
}
}

free(queue);
return (1);
}
