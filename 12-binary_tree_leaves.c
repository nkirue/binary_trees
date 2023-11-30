#include "binary_trees.h"

/**
 * binary_tree_leaves - This counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the leaves of.
 *
 * Return: Number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leav = 0;

	if (tree)
	{
		leav += (!tree->left && !tree->right) ? 1 : 0;
		leav += binary_tree_leaves(tree->left);
		leav += binary_tree_leaves(tree->right);
	}
	return (leav);
}
