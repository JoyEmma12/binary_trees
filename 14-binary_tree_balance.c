#include "binary_trees.h"

/**
  * binary_tree_balance - measure the balance factor of a binary tree
  * @tree: a pointer to the root node of the tree to measure the balance factor
  *
  * Return: Null or 0
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
