#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: root node of the tree to measure
 *
 * Return: size of the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}