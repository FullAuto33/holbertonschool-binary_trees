#include "binary_trees.h"

/**
 * binary_tree_sibling - return siblig of node
 * @node:pointer of node
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}
if (node->parent->left == node)
{
return (node->parent->right);
}
if (node->parent->right == NULL || node->parent->left == NULL)
{
return (NULL);
}
else
{
return (node->parent->left);
}
}
