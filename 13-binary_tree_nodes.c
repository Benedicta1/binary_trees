#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least
 * 1 child in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		counter += binary_tree_nodes(tree->left) + 1
			+ binary_tree_nodes(tree->right);
	return (counter);
}

