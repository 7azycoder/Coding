# Linked List

The structures used in linked list are called self referential structures. Using a class will increase length of the code. Everything is public by default in structures.

## Arrays vs Linked List

Array

```c++
int arr[100];
int arr[n];
int * arr = new int[n];
vector<int> v;
```

### Problems with Arrays

1. Either size is fixed or pre-allocated (in both fixed and variable size arrays) or the worst case insertion at the end is theta(n)
2. Insertion in the middle (or beginning) is costly.
3. Deletion in the middle (or beginning) is costly.
4. Implementation of data structures like queue and dequeue is complex with arrays. 

The idea of linked list is to drop the contiguous memory requirements so that insertions, deletions can efficiently happen at the middle also. And no need to pre-allocate the space.

Skip list data structure - It can provide faster search in linked list.

## Singly vs Doubly Linked Lists

### Advantages

1. Can be traversed in both directions.
2. Delete a node in O(1) time with given a pointer to it.
3. Insert/delete before a given node.
4. Insert/delete from both ends in O(1) time by maintaining tail.

### Disadvantages

1. Extra space for prev.
2. Code becomes more complex.

"dequeue" data structure can be implemented using doubly linked list by maintaining two pointers.