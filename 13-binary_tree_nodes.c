#include "binary_trees.h"

/**
 * binary_tree_nodes -  Counts the nodes with at least 1 child
 *                      in a binary tree.
 * @tree: pointer to root node of tree to measure size.
 * Return: size of binary tree, 0 if null.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}
