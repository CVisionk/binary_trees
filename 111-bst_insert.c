#include "binary_trees.h"

/**
 * bst_insert -  Inserts value in bst.
 * @tree: pointer to root node of tree to insert.
 * @value: value to insert
 * Return: size of binary tree, 0 if null.
*/

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *parent;
	bst_t *temp = *tree;
	bst_t *child = malloc(sizeof(bst_t));

	if (!child)
		return (NULL);

	child->n = value;
	child->left = NULL;
	child->right = NULL;

	if (*tree == NULL)
	{
		child->parent = NULL;
		*tree = child;
		return (child);
	}

	while (temp != NULL)
	{
		parent = temp;
		if (value < temp->n)
			temp = temp->left;
		else if (value > temp->n)
			temp = temp->right;
		else
		{
			free(child);
			return (NULL);
		}
	}

	child->parent = parent;

	if (value < parent->n)
		parent->left = child;
	else
		parent->right = child;

	return (child);
}
