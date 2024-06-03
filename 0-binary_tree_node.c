#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node.
 * @parent: Parent node of child node to be added.
 * @value: value n of child node.
 * Return: pointer to new child node, NULL otherwise.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child = malloc(sizeof(binary_tree_t));

	if (!child)
		return (NULL);

	child->n = value;
	child->left = NULL;
	child->right = NULL;

	if (parent == NULL)
	{
		child->parent = NULL;
		return (child);
	}

	child->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = child;
		return (child);
	} else if (parent->right == NULL)
	{
		parent->right = child;
		return (child);
	}

	return (NULL);
}
