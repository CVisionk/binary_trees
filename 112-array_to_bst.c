#include "binary_trees.h"

bst_t *bst_insert(bst_t **tree, int value);
/**
 * array_to_bst -  Creates bst from array.
 * @array: array of values to insert.
 * @size: size of array
 * Return: root of bst, null otherwise.
*/

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree;

	if (size == 0)
		return (NULL);

	tree = bst_insert(NULL, array[0]);

	for (size_t i = 1; i < size; i++)
		bst_insert(tree, array[i]);

	return (tree);
}

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
			return (temp);
		}
	}

	child->parent = parent;

	if (value < parent->n)
		parent->left = child;
	else
		parent->right = child;

	return (child);
}
