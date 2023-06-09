#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * moves existing right child to the right of the new node
 * @parent: node to insert right child in
 * @value: value to store in new node
 *
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	else
		new->right = NULL;

	parent->right = new;
	return (new);
}
