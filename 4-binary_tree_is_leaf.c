#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 */

 typedef struct binary_tree_s {
    int n;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

int binary_tree_is_leaf(const binary_tree_t *node) {
    if (node == NULL) {
        return 0;
    }

    /* A node is a leaf if it has no left or right children */
    if (node->left == NULL && node->right == NULL) {
        return 1;
    }

    return 0;
}
