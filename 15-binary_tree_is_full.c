#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If leaf node */
	if (tree->left == NULL && tree->right == NULL)
	return (1);

	/* If both left and right are not NULL, check subtrees recursively */
	if (tree->left != NULL && tree->right != NULL)
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If one child is NULL and the other is not */
	return (0);
}