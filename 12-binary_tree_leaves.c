#include "binary_trees.h"

/**
 * binary_tree_leaves - counts all the leaves in a binary tree
 * @tree: root node of the binary tree
 *
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			leaf += 1;
		leaf += binary_tree_leaves(tree->left);
		leaf += binary_tree_leaves(tree->right);
	}
	return (leaf);
}

