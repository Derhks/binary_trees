#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: input node binary tree.
 * Return: Height or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int c_l = 0, c_r = 0;

	if (!tree)
		return (0);

	if (tree->right)
		c_r += 1;
	if (tree->left)
		c_l += 1;

	c_r += binary_tree_height(tree->right);
	c_l += binary_tree_height(tree->left);

	return (c_l - c_r);
}

/**
 * binary_tree_height - This is an auxiliary function
 * @tree: Recive a pointer from the main function
 * Description: Function that measures the height of a binary tree
 * Section header: Section description
 * Return: the height of the tree, otherwise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;
	if (left_height >= right_height)
		return (left_height);
	else
		return (right_height);
}
