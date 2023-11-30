#include "binary_trees.h"

/**
 * binary_tree_height - This measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: If func is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lf = 0, rgh = 0;

		lf = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rgh = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lf > rgh) ? lf : rgh);
	}
	return (0);
}
