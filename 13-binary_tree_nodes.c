#include "binary_trees.h"

/**
 * binary_tree_nodes - A function counts the nodes with at least
 * 1 child in a binary tree.
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: NULL || node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_tree = 0;

	if (tree)
	{
		nodes_tree += (tree->left || tree->right) ? 1 : 0;
		nodes_tree += binary_tree_nodes(tree->left);
		nodes_tree += binary_tree_nodes(tree->right);
	}
	return (nodes_tree);
}
