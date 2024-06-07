#include "binary_trees.h"

/**
 * bst_stack_push - Pushes a node onto the stack.
 * @stack: Double pointer to the top of the stack.
 * @node: The binary tree node to push onto the stack.
 *
 * Return: A pointer to the new top of the stack.
 */
bst_t *bst_stack_push(bst_t **stack, binary_tree_t *node)
{
	bst_t *new;

	new = malloc(sizeof(bst_t));
	if (new == NULL)
		return (NULL);

	new->n = (int)node; 
	new->left = NULL;
	new->right = *stack;
	if (*stack != NULL)
		(*stack)->parent = new;
	new->parent = NULL;
	*stack = new;

	return (new);
}

/**
 * bst_stack_pop - Pops the top node off the stack.
 * @stack: Double pointer to the top of the stack.
 *
 * Return: A pointer to the binary tree node popped off the stack.
 */
binary_tree_t *bst_stack_pop(bst_t **stack)
{
	bst_t *top;
	binary_tree_t *node;

	if (*stack == NULL)
		return (NULL);

	top = *stack;
	node = (binary_tree_t *)top->n;
	*stack = top->right;
	if (*stack != NULL)
		(*stack)->parent = NULL;
	free(top);

	return (node);
}

/**
 * free_stack - Frees all nodes in the stack.
 * @stack: Pointer to the top of the stack.
 */
void free_stack(bst_t *stack)
{
	bst_t *tmp;

	while (stack != NULL)
	{
		tmp = stack->right;
		free(stack);
		stack = tmp;
	}
}

/**
 * binary_tree_levelorder - Traverses a binary tree using
 *						  level-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	bst_t *stack = NULL, *tail = NULL;
	binary_tree_t *node;

	if (tree == NULL || func == NULL)
		return;

	if (bst_stack_push(&stack, (binary_tree_t *)tree) == NULL)
		return;

	while (stack != NULL)
	{
		node = bst_stack_pop(&stack);
		func(node->n);

		if (node->left != NULL)
		{
			if (bst_stack_push(&tail, node->left) == NULL)
			{
				free_stack(stack);
				return;
			}
		}
		if (node->right != NULL)
		{
			if (bst_stack_push(&tail, node->right) == NULL)
			{
				free_stack(stack);
				return;
			}
		}

		if (stack == NULL)
			stack = tail;
		else
		{
			while (stack->right != NULL)
				stack = stack->right;
			stack->right = tail;
		}
		tail = NULL;
	}
}
