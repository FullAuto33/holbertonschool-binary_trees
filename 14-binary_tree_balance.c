#include "binary_trees.h"

/**
 * binary_tree_height2 - height of binary tree
 * @tree: pointer to tree
 * Return: Always 0 (Success)
 */

size_t binary_tree_height2(const binary_tree_t *tree)
{
int countleft = 0;
int countright = 0;

if (tree == NULL)
{
return (0);
}

if (tree->left != NULL)
{
countleft = binary_tree_height2(tree->left) + 1;
}

if (tree->right != NULL)
{
countright = binary_tree_height2(tree->right) + 1;
}
if (countleft > countright)
{
return (countleft);
}
return (countright);
}

int binary_tree_balance(const binary_tree_t *tree)
{
int left = 0;
int right = 0;
if (tree == NULL)
{
return (0);
}
left = binary_tree_height2(tree->left);
right = binary_tree_height2(tree->right);
return (left - right);
}
