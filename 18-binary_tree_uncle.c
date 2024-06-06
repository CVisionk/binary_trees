#include "binary_trees.h"


binary_tree_t *binary_tree_sibling(const binary_tree_t *tree);

/**
 * binary_tree_uncle -  Finds the uncle of a node.
 * @tree: pointer to root node of tree to check for sibling.
 * Return: sibling of binary tree, NULL otherwise
 */
binary_tree_t *binary_tree_uncle(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(tree->parent));
}

#include "binary_trees.h"

/**
 * binary_tree_sibling -  Finds the sibling of a node.
 * @tree: pointer to root node of tree to check for sibling.
 * Return: sibling of binary tree, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (NULL);
	if (tree->parent->left != tree)
		return (tree->parent->left);
	return (tree->parent->right);

}

