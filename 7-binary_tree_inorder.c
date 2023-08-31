#include "binary_trees.h"

/**
 * binary_tree_inorder - a function goes through a binary tree
 * using in-order traversal.
 *
 * @tree: A pointer to the root node of the tree
 * @func: A pointer to a function to call each node.
 *
 * Return: no value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
