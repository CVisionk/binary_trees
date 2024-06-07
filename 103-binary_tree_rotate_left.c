#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  performs a left-rotation on a binary tree
 * @tree: node to rotate
 * Return: return a pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tree_p, *tree_r_l;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	tree_p = tree->parent;
	tree_r_l = tree->right->left;

	tree->parent = tree->right;
	tree->right->left = tree;
	tree->right->parent = tree_p;
	tree->right = tree_r_l;

	return (tree->parent);
}
