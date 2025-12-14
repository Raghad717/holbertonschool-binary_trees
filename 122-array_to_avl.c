#include "binary_trees.h"

/**
* array_to_avl - Builds an AVL tree from an array
* @array: Pointer to the first element of the array to be converted
* @size: Number of elements in the array
*
* Return: Pointer to the root node of the created AVL tree, or NULL on failure
*/
avl_t *array_to_avl(int *array, size_t size)
{
avl_t *root = NULL;
size_t i;

/* Check if array is NULL or empty */
if (array == NULL || size == 0)
return (NULL);

/* Insert each element from array into AVL tree */
for (i = 0; i < size; i++)
{
/* avl_insert handles duplicates (ignores them) */
if (avl_insert(&root, array[i]) == NULL && root == NULL)
{
/* If insertion fails and tree is still NULL, return NULL */
return (NULL);
}
}

return (root);
}
