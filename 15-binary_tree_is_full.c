#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - This is an auxiliary function
 * @tree: Recive a pointer from the main function
 * Description: Function that checks if a binary tree is full
 * Section header: Section description
 * Return: 1 if the tree is full, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->right || tree->left)
	{
		if (tree->left)
			return (binary_tree_is_full(tree->right));
		if (tree->right)
			return (binary_tree_is_full(tree->left));
	}
	return (0);
}
