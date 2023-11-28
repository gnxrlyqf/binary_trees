#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using preorder
 * @tree: root node of the binary tree
 * @func: function to call for each node
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
