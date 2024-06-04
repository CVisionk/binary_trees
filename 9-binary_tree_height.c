#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to root node of tree to measure height.
 * Return: size of binary tree, 0 if null.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	size_t right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (
	(left_height > right_height) ?
	 left_height : right_height
	);
}
