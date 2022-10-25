# Deque

Doubly ended queue

## Operation

- insertFront
- deleteFront
- insertRear
- deleteRear
- getFront
- getRear
- isFull
- isEmpty
- size

## Implementation

- Linked list
- Array

## Applications

1. A deque can be used as both stack and queue.
2. Maintaining history of actions.
3. A Steal process scheduling algorithm.
4. Implementing a priority queue with two types of priorities.
5. Maximum/Minimum of all subarrays of size k in an array.

## Internal working

push_back: ~ O(1)
push_front: ~ O(1)
pop_back: O(1)
pop_front: O(1)
[] : O(1)
insert at index: O(1)
erase at index: O(1)
