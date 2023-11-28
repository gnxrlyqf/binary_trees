#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree using postorder
 * @tree: root node of the binary tree
 * @func: function to call for each node
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
