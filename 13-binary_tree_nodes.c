#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - This is an auxiliary function
 * @tree: Recive a pointer from the main function
 * Description: Function that counts the nodes with at least 1 child
 * Section header: Section description
 * Return: The count of nodes with at least 1 child, otherwise 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int child = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		child += 1;
	if (tree->left != NULL)
		child += binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		child += binary_tree_nodes(tree->right);
	return (child);
}
