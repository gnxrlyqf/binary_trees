#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - measures binary tree height
 * @tree: root node of the tree to measure
 *
 * Return: tree size
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		if (left > right)
			return (left);
		else
			return (right);
	}
	return (0);
}
