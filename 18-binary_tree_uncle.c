#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds a node's uncle
 * @node: node to process
 *
 * Return: node uncle, or  NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gp = node->parent->parent;

	if (!node || !node->parent || !gp)
		return (NULL);
	if (gp->left == node->parent)
		return (gp->right);
	return (gp->left);
}
