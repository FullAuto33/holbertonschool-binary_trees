#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node->parent->parent->left == node->parent)
    {
        return (node->parent->parent->right);
    }
    else
    {
	return (node->parent->parent->left);
    }
}
