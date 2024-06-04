#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: pointer to parent node to insert left child node.
 * @value: value to to in new node;
 * Return: pointer to new node, NULL otherwise.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child, *temp;

	if (parent == NULL)
		return (NULL);

	child = malloc(sizeof(binary_tree_t));
	if (!child)
		return (NULL);

	child->n = value;
	child->right = NULL;
	child->left = NULL;

	if (parent->left == NULL)
	{
		child->parent = parent;
		parent->left = child;
	} else
	{
		temp = parent->left;
		parent->left = child;
		child->parent = parent;
		temp->parent = child;
		child->left = temp;
	}

	return (child);
}
