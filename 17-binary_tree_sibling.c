#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent)
{
return (NULL);
}
if (node->parent->left == node)
{
node = node->parent->right;
}
else if (node->parent->left == NULL || node->parent->right == NULL)
{
return (NULL);
}
else if (node->parent->right == node)
{
node = node->parent->left;
}
return (node);
}
