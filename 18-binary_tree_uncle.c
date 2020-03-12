#include "binary_trees.h"

/**
 * binary_tree_uncle - checks out the uncle.
 * @node: a pointer to the node.
 * Return: pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);
	return (node->parent->parent->left);
}
