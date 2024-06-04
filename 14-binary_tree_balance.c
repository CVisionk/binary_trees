#include "binary_trees.h"

/**
 * binary_tree_balance -  Measures the balance factor of a binary tree.
 * @tree: pointer to root node of tree to measure size.
 * Return: size of binary tree, 0 if null.
*/

size_t binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
	{
		return (binary_tree_balance(tree->left)
		- binary_tree_balance(tree->right) + 1);
	}
	else if (tree->right != NULL && tree->left == NULL)
	{
		return (binary_tree_balance(tree->left)
		- binary_tree_balance(tree->right) - 1);
	}
	return (binary_tree_balance(tree->left) - binary_tree_balance(tree->right));

}
