#include "binary_trees.h"

/**
* binary_tree_levelorder - Goes through a binary tree using level-order traversal
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function to call for each node
*
* Description: The value in each node is passed as a parameter to func.
* If tree or func is NULL, do nothing
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
const binary_tree_t **queue;
int front = 0, rear = 0;
const binary_tree_t *current;

/* Check if tree or func is NULL */
if (tree == NULL || func == NULL)
return;

/* Allocate memory for queue (assuming max 1024 nodes) */
queue = malloc(sizeof(binary_tree_t *) * 1024);
if (queue == NULL)
return;

/* Enqueue the root node */
queue[rear++] = tree;

/* Process nodes while queue is not empty */
while (front < rear)
{
/* Dequeue a node */
current = queue[front++];

/* Call function on the node's value */
func(current->n);

/* Enqueue left child if exists */
if (current->left != NULL)
queue[rear++] = current->left;

/* Enqueue right child if exists */
if (current->right != NULL)
queue[rear++] = current->right;
}

/* Free the queue */
free(queue);
}
