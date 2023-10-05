#include "binary_trees.h"

/**
 * max_size_t - finds larger of two size_t values
 * @a: The first value to compare
 * @b: The second value to compare
 * Return: larger size_t value, or value of both if equal
 */
size_t max_size_t(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */
