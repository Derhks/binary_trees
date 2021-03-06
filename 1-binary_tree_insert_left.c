#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of
 * another node
 * @parent: parent of the node at left-insert
 * @value: value of the new node
 * Return: updated tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{

	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;

	new_node->right = NULL;

	new_node->left = NULL;

	if (parent == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->parent = parent;

	if (parent->left != NULL)
	{

		new_node->left = parent->left;

		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
