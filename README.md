# 0x1D. C - Binary trees

This projects covers the concepts of binary trees!

## Learning Objectives
### General
* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files for all tasks. Provided by ALX.

## Helper File :raised_hands:

* [binary_tree_print.c](./binary_tree_print.c): C function that prints binary
trees in a pretty way.

## Header File :file_folder:

* [binary_trees.h](./binary_trees.h): Header file containing definitions and
prototypes for all types and functions written for the project.

## Environment

<div>

<a  href="https://ubuntu.com/"  target="_blank"><img  height="48px"  src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/ubuntu-icon.svg"  alt="C programming language"></a>

* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

</div>

> Basic binary tree
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

0. Function that creates a binary tree node
1. Function that inserts a node as the left-child of another node
2. Function that inserts a node as the right-child of another node
3. Function that deletes an entire binary tree
4. Function that checks if a node is a leaf
5. Function that checks if a given node is a root
6. Function that goes through a binary tree using pre-order traversal
7. Function that goes through a binary tree using in-order traversal
8. Function that goes through a binary tree using post-order traversal
9. Function that measures the height of a binary tree
10. Function that measures the depth of a node in a binary tree
11. Function that measures the size of a binary tree
12. Function that counts the leaves in a binary tree
13. Function that counts the nodes with at least 1 child in a binary tree
14. Function that measures the balance factor of a binary tree
15. Function that checks if a binary tree is full
16. Function that checks if a binary tree is perfect
17. Function that finds the sibling of a node
18. Function that finds the uncle of a node
19. Function that finds the lowest common ancestor of two nodes
20. Function that goes through a binary tree using level-order traversal
21. Function that checks if a binary tree is complete
22. Function that performs a left-rotation on a binary tree
23. Function that performs a right-rotation on a binary tree
24. Function that checks if a binary tree is a valid Binary Search Tree
25. Function that inserts a value in a Binary Search Tree
26. Function that builds a Binary Search Tree from an array
27. Function that searches for a value in a Binary Search Tree
28. Function that removes a node from a Binary Search Tree
29. What are the average time complexities of those operations on a Binary Search Tree
30. Function that checks if a binary tree is a valid AVL Tree
31. Function that inserts a value in an AVL Tree
32. Function that builds an AVL tree from an array
33. Function that removes a node from an AVL tree
34. Function that builds an AVL tree from an array
35. What are the average time complexities of those operations on an AVL Tree
36. Function that checks if a binary tree is a valid Max Binary Heap (Task in progress)
37. Function that inserts a value in Max Binary Heap (Task in progress)
38. Function that builds a Max Binary Heap tree from an array (Task in progress)
39. Function that extracts the root node of a Max Binary Heap (Task in progress)
40. Function that converts a Binary Max Heap to a sorted array of integers (Task in progress)
41. What are the average time complexities of those operations on a Binary Heap


Function Prototypes

| File                             | Prototype                                                                                        |
| -------------------------------- | ------------------------------------------------------------------------------------------------ |
| `binary_tree_print.c`            | `void binary_tree_print(const binary_tree_t *tree)`                                              |
| `0-binary_tree_node.c`           | `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`                             |
| `1-binary_tree_insert_left.c`    | `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`                      |
| `2-binary_tree_insert_right.c`   | `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`                     |
| `3-binary_tree_delete.c`         | `void binary_tree_delete(binary_tree_t *tree);`                                                  |
| `4-binary_tree_is_leaf.c`        | `int binary_tree_is_leaf(const binary_tree_t *node);`                                            |
| `5-binary_tree_is_root.c`        | `int binary_tree_is_root(const binary_tree_t *node);`                                            |
| `6-binary_tree_preorder.c`       | `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`                       |
| `7-binary_tree_inorder.c`        | `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`                        |
| `8-binary_tree_postorder.c`      | `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`                      |
| `9-binary_tree_height.c`         | `size_t binary_tree_height(const binary_tree_t *tree);`                                          |
| `10-binary_tree_depth.c`         | `size_t binary_tree_depth(const binary_tree_t *tree);`                                           |
| `11-binary_tree_size.c`          | `size_t binary_tree_size(const binary_tree_t *tree);`                                            |
| `12-binary_tree_leaves.c`        | `size_t binary_tree_leaves(const binary_tree_t *tree);`                                          |
| `13-binary_tree_nodes.c`         | `size_t binary_tree_nodes(const binary_tree_t *tree);`                                           |
| `14-binary_tree_balance.c`       | `int binary_tree_balance(const binary_tree_t *tree);`                                            |
| `15-binary_tree_is_full.c`       | `int binary_tree_is_full(const binary_tree_t *tree);`                                            |
| `16-binary_tree_is_perfect.c`    | `int binary_tree_is_perfect(const binary_tree_t *tree);`                                         |
| `17-binary_tree_sibling.c`       | `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`                                       |
| `18-binary_tree_uncle.c`         | `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`                                         |
| `100-binary_trees_ancestor.c`    | `binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);` |
| `101-binary_tree_levelorder.c`   | `void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));`                     |
| `102-binary_tree_is_complete.c`  | `int binary_tree_is_complete(const binary_tree_t *tree);`                                        |
| `103-binary_tree_rotate_left.c`  | `binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);`                                   |
| `104-binary_tree_rotate_right.c` | `binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);`                                  |
| `110-binary_tree_is_bst.c`       | `int binary_tree_is_bst(const binary_tree_t *tree);`                                             |
| `111-bst_insert.c`               | `bst_t *bst_insert(bst_t **tree, int value);`                                                    |
| `112-array_to_bst.c`             | `bst_t *array_to_bst(int *array, size_t size);`                                                  |
| `113-bst_search.c`               | `bst_t *bst_search(const bst_t *tree, int value);`                                               |
| `114-bst_remove.c`               | `bst_t *bst_remove(bst_t *root, int value);`                                                     |
| `120-binary_tree_is_avl.c`       | `int binary_tree_is_avl(const binary_tree_t *tree);`                                             |
| `121-avl_insert.c`               | `avl_t *avl_insert(avl_t **tree, int value);`                                                    |
| `122-array_to_avl.c`             | `avl_t *array_to_avl(int *array, size_t size);`                                                  |


```
## Authors



<details>
    <summary>Beka Gerbaba</summary>
    <ul>
    <li><a href="https://https://github.com/Bekaensarmu">Github</a></li>
    <li><a href="mailto:beekanensarmu@gmail.com">e-mail</a></li>
    </ul>
</details>
``` 
