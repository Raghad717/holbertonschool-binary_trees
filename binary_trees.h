#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

/* Typedef for binary tree node */
typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* Function prototype for binary_tree_inorder */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Helper function to create a new node (used in main) */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Function to delete a tree */
void binary_tree_delete(binary_tree_t *tree);

/* Function to check if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Function to print binary tree (provided separately) */
void binary_tree_print(const binary_tree_t *tree);

#endif /* BINARY_TREES_H */
