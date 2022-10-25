# Binary Search Tree

## Background

|                      | Array(unsorted) | Array (sorted) | Linked list | Linked list (sorted) | BST (Balanced) | Hash Table |
|----------------------|-----------------|----------------|-------------|----------------------|----------------|------------|
| **Search**           | O(n)            | O(log n)       | O(n)        | O(n)                 | O(log n)       | O(1)       |
| **Insert**           | O(1)            | O(n)           | O(1)        | O(n)                 | O(log n)       | O(1)       |
| **Delete**           | O(n)            | O(n)           | O(n)        | O(n)                 | O(log n)       | O(1)       |
| **Find Closest**     | O(n)            | O(log n)       | O(n)        | O(n)                 | O(log n)       | O(n)       |
| **Sorted Traversal** | O(n log n)      | O(n)           | O(n log n)  | O(n                  | O(n)           | O(n log n) |

## Introduction

1. For every node, keys in left side are smaller and keys in right side are greater.
2. All keys are typically considered as distinct.
3. Like linked list, it is a linked data structure.
4. Implemented in C++ as map, set, multimap and multiset.

All operation on a normal BST (not balanced) are O(h) where h = height of tree.

## Searching In BST

Time complexity - O(h)
Auxiliary space for recursive - O(h)
Auxiliary space for iterative - O(1)

## Insertion In BST

Time complexity - O(h)
Auxiliary space for recursive - O(h)
Auxiliary space for iterative - O(1)

## Deletion in BST

There are three possibilities:

1. Node to be deleted is a leaf node.
2. Node to be deleted has only one child.
3. Node to be deleted has two children.

Inorder successor is the closest higher value and inorder predecessor is the closest lower value.

This inorder successor is not a good way to find it in general, it works only when right child is not null.
In some cases in general, inorder successor may be ancestor, but not for this case.

Time complexity - O(h)
Auxiliary space for recursive - O(h)
