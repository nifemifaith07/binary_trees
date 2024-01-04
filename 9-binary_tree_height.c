#include "binary_trees.h"

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: ptr to the rootnode of the tree to measure
 *
 * Return: Height, otherwise 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	size_t lt = 0, size_t rt = 0;

	lt = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((lt > rt) ? lt : rt);
}
