#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

size_t left_count = binary_tree_nodes(tree->left);
size_t right_count = binary_tree_nodes(tree->right);

if (tree->left != NULL || tree->right != NULL)
{
return (1 + left_count + right_count);
}
else
{
return (left_count + right_count);
}
}
