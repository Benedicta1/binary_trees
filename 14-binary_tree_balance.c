#include "binary_trees.h"


#ifndef MAX_INT
#define MAX_INT

/**
 * max_int - This finds larger of two int values
 * @a: The first value to compare
 * @b: The second value to compare
 * Return: larger int value, or value of both if equal
 */
inline int max_int(int a, int b)
{
	return ((a > b) ? a : b);
}

#endif
