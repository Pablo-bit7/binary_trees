#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	/* If the node is a leaf, its height is 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively get the height of the left and right subtrees */
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	/* Return the maximum height plus 1 for the current edge */
	return (height_left > height_right ? height_left + 1 : height_right + 1);
}
