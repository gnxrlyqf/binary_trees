#include "binary_trees.h"

/**
 * binary_tree_nodes - counts all the nodes in a binary tree
 * @tree: root node of the binary tree
 *
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			node += 1;
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
	}
	return (node);
}

