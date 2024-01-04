#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value of the newnode
 *
 * Return: pointer to the newnode
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
	binary_tree_t *newnode = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	return (newnode);
}
