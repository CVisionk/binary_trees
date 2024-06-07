#include "binary_trees.h"

/**
 * binary_tree_rotate_right -  performs a right-rotation on a binary tree
 * @tree: node to rotate
 * Return: return a pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tree_p, *tree_l_r;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	tree_p = tree->parent;
	tree_l_r = tree->left->right;

	tree->parent = tree->left;
	tree->left->right = tree;
	tree->left->parent = tree_p;
	tree->left = tree_l_r;

	if (tree_l_r != NULL)
		tree_l_r->parent = tree;

	if (tree_p != NULL)
	{
		if (tree_p->left == tree)
			tree_p->left = tree->parent;
		else
		{
			tree_p->right = tree->parent;
		}
	}

	return (tree->parent);
}
