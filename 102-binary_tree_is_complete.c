#include "binary_trees.h"


size_t binary_perfect_recursion(const binary_tree_t *tree, size_t side_depth);
size_t binary_tree_depth(const binary_tree_t *tree);


/**
 * binary_tree_is_perfect -  Checks if a binary tree is perfect.
 * @tree: pointer to root node of tree to check.
 * Return: size of binary tree, 0 if null.
*/

size_t binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *curr;
	size_t side_depth = 0;

	if (tree == NULL)
		return (0);

	curr = tree;
	while (curr->left)
	{
		curr = curr->left;
		++side_depth;
	}

	return (binary_perfect_recursion(tree, side_depth));

}


/**
 * binary_perfect_recursion - contains recursion logic of
 *                                    binary_tree_is_perfect
 * @tree: Node to check for perfection.
 * @side_depth: depth to check for perfection.
 * Return: 1 if perfect, 0 otherwise.
*/


size_t binary_perfect_recursion(const binary_tree_t *tree, size_t side_depth)
{
	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL && tree->right == NULL))
	{
		return ((side_depth == binary_tree_depth(tree)));
	}
	else if (binary_perfect_recursion(tree->left, side_depth) &&
	binary_perfect_recursion(tree->right, side_depth))
	{
		return (1);
	}
	return (0);
}


/**
 * binary_tree_depth - measures the depth of a binary tree.
 * @tree: pointer to root node of tree to measure depth.
 * Return: size of binary tree, 0 if null.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
