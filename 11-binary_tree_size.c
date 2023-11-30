#include "binary_trees.h"

/**
 * binary_tree_size - THis measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size of.
 *
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t siz = 0;

	if (tree)
	{
		siz += 1;
		siz += binary_tree_size(tree->left);
		siz += binary_tree_size(tree->right);
	}
	return (siz);
}
