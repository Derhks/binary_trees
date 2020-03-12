#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - This is an auxiliary function
 * @tree: Recive a pointer from the main function
 * Description: Function that counts the leaves in a binary tree
 * Section header: Section description
 * Return: The count of leaves, otherwise 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		leaves += 2;
	if (tree->left != NULL && tree->right == NULL)
		leaves += 1;
	if (tree->left == NULL && tree->right != NULL)
		leaves += 1;
	if (tree->left == NULL && tree->right == NULL)
		leaves += 1;
	return (leaves);
}
