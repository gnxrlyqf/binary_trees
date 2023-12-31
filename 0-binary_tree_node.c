#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent of the node to create
 * @value: value of the node
 *
 * Return: pointer to the new node, or NULL
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL, new->right = NULL;
	return (new);
}
