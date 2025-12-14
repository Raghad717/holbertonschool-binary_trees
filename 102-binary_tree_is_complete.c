#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_is_complete - Checks if a binary tree is complete
* @tree: Pointer to the root node
*
* Return: 1 if complete, 0 otherwise
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
binary_tree_t **queue;
int front = 0, rear = 0, flag = 0, i, count = 0;
const binary_tree_t *tmp[1024], *cur;

if (!tree) return (0);

/* Count nodes using stack */
tmp[0] = tree;
while (count < 1024)
{
cur = tmp[count];
if (!cur) break;
tmp[++count] = cur->left;
tmp[++count] = cur->right;
}

queue = malloc(sizeof(binary_tree_t *) * 1024);
if (!queue) return (0);

queue[rear++] = (binary_tree_t *)tree;
while (front < rear)
{
cur = queue[front++];
if (cur->left)
{
if (flag) { free(queue); return (0); }
queue[rear++] = (binary_tree_t *)cur->left;
}
else flag = 1;

if (cur->right)
{
if (flag) { free(queue); return (0); }
queue[rear++] = (binary_tree_t *)cur->right;
}
else flag = 1;
}
free(queue);
return (1);
}
