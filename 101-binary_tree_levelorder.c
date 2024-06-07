#include "binary_trees.h"
#define MAX_QUEUE_SIZE 100

/**
 * binary_tree_levelorder -  function that goes through a binary tree
 *						 using level-order traversal.
 * @tree: root node of tree to traverse.
 * @func: pointer to a function to call for each node. The value in the
 *		node must be passed as a parameter to this function.
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_t *queue[MAX_QUEUE_SIZE];
	int front = 0;
	int rear = 0;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		binary_tree_t *current = queue[front++];

		func(current->n);

		if (current->left != NULL)
			queue[rear++] = current->left;

		if (current->right != NULL)
			queue[rear++] = current->right;
	}
}
