#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks of a node is a leaf node
 * @node: node to check
 *
 * Return: 1 (is leaf), 0 (is not leaf)
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->right || node->left)
		return (0);
	return (1);
}
