#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * input node binary tree.
 * Return: 1 if is a lef, else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node) {

	if (node->right != NULL || node->left != NULL)
		return (0);

	return (1);
}
