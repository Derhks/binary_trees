#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - This is an auxiliary function
 * @tree: Recive a pointer from the main function
 * @func: Recive a pointer to a auxiliary function
 * Description: Function that goes through a binary tree using pre-order
 * Section header: Section description
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
