#include "binary_trees.h"


/**
 * binary_tree_leaves - number of leaf
 * @tree: pointer of tree
 *
 * Return: Always 0 (Success)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
int compteur = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
compteur++;
}
else
{
compteur = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}
return (compteur);
}
