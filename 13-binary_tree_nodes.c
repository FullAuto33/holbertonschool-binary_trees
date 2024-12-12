#include "binary_trees.h"
/**
 * binary_tree_nodes - count number of node
 * @tree: pointer to tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
int compteur = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left || tree->right)
{
compteur = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
}
return (compteur);
}
