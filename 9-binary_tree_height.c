#include "binary_trees.h"

/**
  * binary_tree_height -  measures the height of a binary tree
  * @tree: pointer to the root node of the tree to measure the height
  *
  * Return: Null or 0
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, h = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > h) ? l : h);
				}
				return (0);
				}
