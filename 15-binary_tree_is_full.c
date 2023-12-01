#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: root node of the tree
 *
 * Return: 1 if full, else 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int lf = 0, rf = 0;

	if (!tree || (!tree->right && !tree->left))
		return (1);
	if (tree->left && tree->right)
	{
		lf = binary_tree_is_full(tree->left);
		rf = binary_tree_is_full(tree->right);
		return (lf && rf);
	}
	return (0);
}
