#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: pointer to root node.
 * @value: value to search.
 * Return: size of binary tree, 0 if null.
*/

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (tree->n == value)
		return (tree);
	else if (tree->n < value)
		return (bst_search(tree->right, value));
	else
		return (bst_search(tree->left, value));
}
