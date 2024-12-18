#include "binary_trees.h"
#include <stddef.h>


/**
 * depth - depth of tree binary
 * @tree: node
 * Return: Always 0 (Success)
 */
size_t depth(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (depth(tree->parent) + 1);
}



/**
 * binary_tree_depth - depth of node
 * @tree: node
 * Return: Always 0 (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (depth(tree) - 1);
}
