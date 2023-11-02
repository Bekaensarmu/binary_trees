#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *hadha, *muca;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	hadha = first->parent, muca = second->parent;
	if (first == muca || !hadha || (!hadha->parent && muca))
		return (binary_trees_ancestor(first, muca));
	else if (hadha == second || !muca || (!muca->parent && hadha))
		return (binary_trees_ancestor(hadha, second));
	return (binary_trees_ancestor(hadha, muca));
}
