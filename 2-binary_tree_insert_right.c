#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another
 *                            node.
 * @parent: pointer to parent node to insert left child node.
 * @value: value to to in new node;
 * Return: pointer to new node, NULL otherwise.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right == NULL)
	{
		child->parent = parent;
		parent->right = child;
	} else
	{
		temp = parent->right;
		parent->right = child;
		child->parent = parent;
		temp->parent = child;
		child->right = temp;
	}

	return (child);
}
