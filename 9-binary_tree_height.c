#include "binary_trees.h"

/**
 * max_size_t - finds larger of two size_t values
 * @x: The first value to compare
 * @y: The second value to compare
 * Return: larger size_t value, or value of both if equal
 */
size_t max_size_t(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}
