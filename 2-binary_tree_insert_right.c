#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as rightchild of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode, *tmp;

	if (!parent)
		return (NULL);

	nnode = malloc(sizeof(binary_tree_t));
	if (!nnode)
		return (NULL);

	nnode->n = value;
	nnode->parent = parent;
	nnode->left = NULL;
	nnode->right = NULL;

	if (!parent->right)
	{
		parent->right = nnode;
	}
	else
	{
		tmp = parent->right;
		parent->right = nnode;
		tmp->parent = nnode;
		nnode->right = tmp;
	}
	return (nnode);
}
