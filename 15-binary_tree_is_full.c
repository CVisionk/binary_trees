#include "binary_trees.h"

/**
 * binary_tree_is_full -  Checks if a binary tree is full.
 * @tree: pointer to root node of tree to check.
 * Return: size of binary tree, 0 if null.
*/

size_t binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right == NULL) ||
	(binary_tree_is_full(tree->left) &&
	binary_tree_is_full(tree->right)))
		return (1);
	return (0);
}
