#include "binary_trees.h"

/**
 * binary_tree_balance - It measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Return 0 If tree is NULL, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Returs 0 if If tree is NULL, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lf = 0, rgh = 0;

		lf = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rgh = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lf > rgh) ? lf : rgh);
	}
	return (0);
}
