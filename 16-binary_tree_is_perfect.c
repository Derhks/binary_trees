#include "binary_trees.h"

/**
 * _pow_recursion - Returns the value.
 * @x: variable 1
 * @y: variable 2
 *Return: -1.
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y < 0)
		return (-1);
	else
		return (1);
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

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: input node binary tree.
 * Return: number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (!(tree->right) && !(tree->left))
		return (1);
	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect.
 * @tree: input node binary tree.
 * Return: 1 if is full or 0 is not full or tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if ((_pow_recursion(2, binary_tree_height(tree)))
		== (int) binary_tree_leaves(tree))

		return (1);
	else
		return (0);
}
