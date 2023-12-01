#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds a node's sibling
 * @node: node to tprocess
 *
 * Return: sibling to the node, or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}

