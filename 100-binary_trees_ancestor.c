#include "binary_trees.h"

/**
 * binary_trees_ancestor - A function finds the lowest common
 * ancestor of two nodes.
 *
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: NULL || common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mom_t, *pop_t;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mom_t = first->parent, pop_t = second->parent;
	if (first == pop_t || !mom_t || (!mom_t->parent && pop_t))
		return (binary_trees_ancestor(first, pop_t));
	else if (mom_t == second || !pop_t || (!pop_t->parent && mom_t))
		return (binary_trees_ancestor(mom_t, second));
	return (binary_trees_ancestor(mom_t, pop_t));
}
