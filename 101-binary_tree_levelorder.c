#include "binary_trees.h"

/**
  * binary_tree_levelorder - binary tree using level-order traversal
  * @tree: a pointer to the root node of the tree to traverse
  * @func: a pointer to a function to call for each node
  *
  * Return: Null of nothing
  */
void binary_tree_levelorder(const binary_tree_t *tree,
		void (*func)(int))
{
	levelorder_queue_t *head, *tail;

	if (tree == NULL || func == NULL)
		return;

	head = tail = create_node((binary_tree_t *)tree);
	if (head == NULL)
		return;

	while (head != NULL)
	{
		pint_push(head->node, head, &tail, func);
		pop(&head);
	}
}
