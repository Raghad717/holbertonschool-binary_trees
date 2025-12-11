# Binary Trees

## Description
 data structures where each node has at most two children, enabling efficient data operations and serving as foundational building blocks for advanced algorithms and real-world applications like databases and AI systems.

---
## Learning Objectives

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
*  What is a complete, a full, a perfect, a balanced binary tree  
  ---

## Requirements  

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the standard library
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you * do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called binary_trees.h
* Don’t forget to push your header file
* All your header files should be include guarded
  ---

## 📋 File Descriptions

| File | Description |Time Complexity
|------|-------------|
| `binary_trees.h` | Header file containing structure definitions and function prototypes | -
| `0-binary_tree_node.c` | Function to create a binary tree node | o(1)
| `1-binary_tree_insert_left.c` | Function to insert a node as left-child | O(1)
| `2-binary_tree_insert_right.c` | Function to insert a node as right-child | O(1)
| `3-binary_tree_delete.c` | Function to delete an entire binary tree | O(n)
| `4-binary_tree_is_leaf.c` | Function to check if a node is a leaf | O(1)
| `5-binary_tree_is_root.c` | Function to check if a node is a root | O(1)
| `6-binary_tree_preorder.c` | Function for pre-order traversal | O(n)
| `7-binary_tree_inorder.c` | Function for in-order traversal | O(n)
| `8-binary_tree_postorder.c` | Function for post-order traversal | O(n)
| `9-binary_tree_height.c` | Function to measure height of a binary tree | O(n)
| `10-binary_tree_depth.c` | Function to measure depth of a node | O(n)
| `11-binary_tree_size.c` | Function to measure size of a binary tree | O(n)
| `12-binary_tree_leaves.c` | Function to count leaves in a binary tree | O(n)
| `13-binary_tree_nodes.c` | Function to count nodes with at least 1 child | O(n)
| `14-binary_tree_balance.c` | Function to measure balance factor of a binary tree | O(n)
| `15-binary_tree_is_full.c` | Function to check if a binary tree is full | O(n)
| `16-binary_tree_is_perfect.c` | Function to check if a binary tree is perfect | O(n)
| `17-binary_tree_sibling.c` | Function to find the sibling of a node | O(1)
| `18-binary_tree_uncle.c` | Function to find the uncle of a node | O(1)
| `README.md` | Project documentation |
---

## Tasks Implementation

## Task 0: New node
**Function:**  ّbinary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

- Creates a binary tree node

- Returns pointer to new node, or NULL on failure

## Task 1: Insert left
**Function:** binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

- Inserts a node as the left-child of another node

- If parent already has a left-child, new node takes its place

## Task 2: Insert right
**Function:** binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)

- Inserts a node as the right-child of another node

- If parent already has a right-child, new node takes its place

## Task 3: Delete
**Function:** void binary_tree_delete(binary_tree_t *tree)

- Deletes an entire binary tree

- Uses post-order traversal

## Task 4: Is leaf
**Function:** int binary_tree_is_leaf(const binary_tree_t *node)

- Checks if a node is a leaf

- Returns 1 if node is a leaf, 0 otherwise

## Task 5: Is root
**Function:** int binary_tree_is_root(const binary_tree_t *node)

- Checks if a node is a root

- Returns 1 if node is a root, 0 otherwise

## Task 6: Pre-order traversal
**Function:** void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))

- Goes through a binary tree using pre-order traversal

- Applies function to each node's value

## Task 7: In-order traversal
**Function:** void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))

- Goes through a binary tree using in-order traversal

- Applies function to each node's value

## Task 8: Post-order traversal
**Function:** void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))

- Goes through a binary tree using post-order traversal

- Applies function to each node's value

## Task 9: Height
**Function:** size_t binary_tree_height(const binary_tree_t *tree)

- Measures the height of a binary tree

- Height of NULL tree is 0

- Height of leaf node is 0

## Task 10: Depth
**Function:** size_t binary_tree_depth(const binary_tree_t *node)

- Measures the depth of a node in a binary tree

- Depth of root is 0

## Task 11: Size
**Function:** size_t binary_tree_size(const binary_tree_t *tree)

- Measures the size of a binary tree

- Size = number of nodes in tree

## Task 12: Leaves
**Function:** size_t binary_tree_leaves(const binary_tree_t *tree)

- Counts the leaves in a binary tree

- Leaves = nodes with no children

## Task 13: Nodes
**Function:** size_t binary_tree_nodes(const binary_tree_t *tree)

- Counts the nodes with at least 1 child in a binary tree

## Task 14: Balance factor
**Function:** int binary_tree_balance(const binary_tree_t *tree)

- Measures the balance factor of a binary tree

- Balance factor = height(left) - height(right)

## Task 15: Is full
**Function:** int binary_tree_is_full(const binary_tree_t *tree)

- Checks if a binary tree is full

- Full tree: every node has 0 or 2 children

## Task 16: Is perfect
**Function:** int binary_tree_is_perfect(const binary_tree_t *tree)

- Checks if a binary tree is perfect

- Perfect tree: all levels completely filled

## Task 17: Sibling
**Function:** binary_tree_t *binary_tree_sibling(binary_tree_t *node)

- Finds the sibling of a node

- Returns pointer to sibling node, or NULL

## Task 18: Uncle
**Function:** binary_tree_t *binary_tree_uncle(binary_tree_t *node)

- Finds the uncle of a node

- Returns pointer to uncle node, or NULL
---

## Edge Cases Handled
* NULL pointers: Functions handle NULL input gracefully

* Empty trees: Operations on empty trees return appropriate values

* Single node trees: Functions work correctly with single nodes

* Invalid operations: Appropriate return values for invalid operations

  ---

## Tree Types Supported

Tree Type                         	Definition

Binary Tree                       	Each node has at most 2 children

Full Binary Tree                  	Every node has 0 or 2 children

Perfect Binary Tree               	All levels completely filled

Complete Binary Tree              	All levels except possibly last are filled





## Authors
* Raghad Almalki
* Amaal Asiri 

License
This project is for educational purposes as part of the Holberton School curriculum.
