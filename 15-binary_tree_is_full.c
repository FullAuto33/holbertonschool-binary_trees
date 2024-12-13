#include "binary_trees.h"

/**
 * binary_tree_is_full - verify if tree is full or no
 * @tree: pointer to tree
 * Return: Always 0 (Success)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
if (tree->left != NULL && tree->right != NULL)
{
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
else
{
return (0);
}
}
