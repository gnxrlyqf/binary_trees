#include "binary_trees.h"

/**
 * height - measures binary tree height
 * @tree: root node of the tree to measure
 *
 * Return: tree size
*/

size_t height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		if (tree->left)
			left = 1 + height(tree->left);
		if (tree->right)
			right = 1 + height(tree->right);
		if (left > right)
			return (left);
		else
			return (right);
	}
	return (0);
}

/**
 * binary_tree_balance - measures how balanced the tree is
 * @tree: root node of the tree
 *
 * Return: tree balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (height(tree->left) - height(tree->right));
	return (0);
}

