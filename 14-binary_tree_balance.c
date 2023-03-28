#include "binary_trees.h"

/**
 * find_max - find max between two numbers
 * @a: first number
 * @b: second number
 *
 * Return: max
 */
int find_max(int a, int b)
{
	if (a >= b)
		return (a);

	return (b);
}

/**
 * find_h - finds the height of a tree
 * @tree: tree to find height of
 *
 * Return: height or 0
 */
size_t find_h(const binary_tree_t *tree)
{
	size_t height;

	if (!tree)
		return (0);

	height = find_max(find_h(tree->left), find_h(tree->right));

	return (height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a tree
 * @tree: a pointer to the root node
 *
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (find_h(tree->left) - find_h(tree->right));
}