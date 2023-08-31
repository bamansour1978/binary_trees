#include "binary_trees.h"

/**
 * binary_tree_leaves - A function counts the leaves in a binary tree.
 *
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: leaves's number in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_tree = 0;

	if (tree)
	{
		leaves_tree += (!tree->left && !tree->right) ? 1 : 0;
		leaves_tree += binary_tree_leaves(tree->left);
		leaves_tree += binary_tree_leaves(tree->right);
	}
	return (leaves_tree);
}
