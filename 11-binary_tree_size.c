#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (size);
}
size_t left_size = binary_tree_size(tree->left);
size_t right_size = binary_tree_size(tree->right);
return 1 + left_size + right_size;
}
