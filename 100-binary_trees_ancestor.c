#include "binary_trees.h"


long long int b_depth(const binary_tree_t *tree);
binary_tree_t *b_ancestor(const binary_tree_t *first,
const binary_tree_t *second, int d_sub);

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @first: pointer to root node of tree to check for ancestor.
 * @second: socond pointer.
 * Return: sibling of binary tree, NULL other
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	long long int first_d, sec_d;
	long long int d_subtraction;

	if (first == NULL || second == NULL)
		return (NULL);

	first_d = b_depth(first);
	sec_d = b_depth(second);
	d_subtraction = first_d - sec_d;

	if (first_d >= sec_d)
		return (b_ancestor(first, second, d_subtraction));

	return (b_ancestor(second, first, -d_subtraction));

}


/**
 * b_ancestor - Finds the ancestor of a node.
 * @first: pointer to root node of tree to check for ancestor.
 * @second: socond pointer.
 * @d_sub: level difference.
 * Return: sibling of binary tree, NULL other
 */

binary_tree_t *b_ancestor(const binary_tree_t *first,
const binary_tree_t *second, int d_sub)
{
	for (long long int i = 0; i < d_sub ; ++i)
	{
		first = first->parent;
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}
	if (first->parent == second->parent)
		return (first->parent);
	return (NULL);
}

/**
 * b_depth - measures the depth of a binary tree.
 * @tree: pointer to root node of tree to measure depth.
 * Return: size of binary tree, 0 if null.
*/

long long int b_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree->parent ? 1 + b_depth(tree->parent) : 0);
}
