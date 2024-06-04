#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree.
 * @tree: pointer to root node of tree to measure height.
 * Return: size of binary tree, 0 if null.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
