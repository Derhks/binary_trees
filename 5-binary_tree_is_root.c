#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is a root
 * @node: input node binary tree.
 * Return: 1 if is a lef, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{

	if (!(node->parent))
		return (0);
	return (1);
}
