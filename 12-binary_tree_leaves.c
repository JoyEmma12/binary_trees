#include "binary_trees.h"

/**
  * binary_tree_leaves - count the leaves in a bianry tree
  * @tree: pointer to the root node of the tree to count the number of leaves
  *
  * Return: Null
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		size_t count;

		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
