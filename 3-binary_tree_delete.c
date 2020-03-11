#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes all binary tree.
 * @tree: input node binary tree.
 * Return: Non Return.
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
