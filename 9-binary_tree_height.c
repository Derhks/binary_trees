#include "binary_trees.h"

/**
 * binary_tree_height - ount a height to the binary tree
 * @tree: input node binary tree.
 * Return: height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t h1 = 0;
	size_t h2 = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		h1 = 1 + binary_tree_height(tree->right);
		h2 = 1 + binary_tree_height(tree->left);

		if (h1 < h2)
			return (h1);
		return (h2);
	}
	return (0);
}
