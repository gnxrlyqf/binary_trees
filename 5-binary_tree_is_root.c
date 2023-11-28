#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is the root node
 * @node: node to check
 *
 * Return: 1 (is root), 0 (is not root)
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent || !node)
		return (0);
	return (1);
}
