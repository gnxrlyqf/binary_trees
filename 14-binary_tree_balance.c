#include "binary_trees.h"

/**
 * binary_tree_balance - measures how balanced the tree is
 * @tree: root node of the tree
 *
 * Return: tree balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
