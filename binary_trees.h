#ifndef BINARY_TREES_H
#define BINARY_TREES_H


#include <stddef.h>

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

typedef struct binary_tree_s binary_tree_t; /* Basic Binary Tree */
typedef struct binary_tree_s bst_t; /* Binary Search Tree */
typedef struct binary_tree_s avl_t; /* AVL Tree */
typedef struct binary_tree_s heap_t;/* Max Binary Heap */

void binary_tree_print(const binary_tree_t *); /* Function Print */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value); /* Funtion 0 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);/* Function 1 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value); /* Function 2 */
void binary_tree_delete(binary_tree_t *tree); /* Function 3 */
int binary_tree_is_leaf(const binary_tree_t *node); /* Function 4 */
int binary_tree_is_root(const binary_tree_t *node); /* Function 5 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)); /* Function 6 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)); /* Function 7 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)); /* Function 8 */
size_t binary_tree_height(const binary_tree_t *tree); /* Function 9 */
size_t binary_tree_depth(const binary_tree_t *tree); /* Function 10 */
size_t binary_tree_size(const binary_tree_t *tree); /* Function 11 */
size_t binary_tree_leaves(const binary_tree_t *tree); /* Function 12 */
size_t binary_tree_nodes(const binary_tree_t *tree); /* Function 13 */
int binary_tree_balance(const binary_tree_t *tree); /* Function 14 */
size_t binary_tree_height2(const binary_tree_t *tree); /* Function height v2 */
int binary_tree_is_full(const binary_tree_t *tree); /* Function 15 */
int binary_tree_is_perfect(const binary_tree_t *tree); /* Function 16 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node); /* Function 17 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node); /* Function 18 */


#endif
