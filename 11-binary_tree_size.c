#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - This is an auxiliary function
 * @tree: Recive a pointer from the main function
 * Description: Function that measures the size of a binary tree
 * Section header: Section description
 * Return: the size of the tree, otherwise 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		size += binary_tree_size(tree->left);
	if (tree->right != NULL)
		size += binary_tree_size(tree->right);
	return (size + 1);
}
