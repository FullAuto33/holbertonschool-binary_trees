#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - Entry point
 * @tree : 
 * Return: Always 0 
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
int countleft = 0;
int countright = 0;
 int countfinaly;
if (tree->left != NULL)
{
countleft = binary_tree_height(tree->left) + 1;
}
 if (tree->right != NULL)
{
countright = binary_tree_height(tree->right) + 1;
}
if (countleft > countright)
{
countfinaly = countleft;
}
if ( countright >= countleft)
{
countfinaly = countright;
}
return (countfinaly);
}
