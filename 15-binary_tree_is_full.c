#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: root node of the tree
 *
 * Return: 1 if full, else 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!node || !node->right || !node->left)
		return (1);
	if (tree->left && tree->right)
		return(binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}
