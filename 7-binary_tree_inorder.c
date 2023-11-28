#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree using inorder
 * @tree: root node of the binary tree
 * @func: function to call for each node
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
