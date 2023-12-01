#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
#include "10-binary_tree_depth.c"

int perfect_check(const binary_tree_t *tree, int d, int l)
{
	int lp = 0, rp = 0;
	if (binary_tree_is_leaf(tree))
		return (d == l + 1);
	if (!tree->left || !tree->right)
		return (0);
	lp = perfect_check(tree->left, d, l + 1);
	rp = perfect_check(tree->right, d, l + 1);
	return (lp && rp);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
		return(perfect_check(tree, binary_tree_depth(tree), 0));
	else
		return (0);
}
