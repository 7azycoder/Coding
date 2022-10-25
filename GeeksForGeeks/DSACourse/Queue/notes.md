# Queue

FIFO

## Operations

- enqueue()
- dequeue()
- getFront()
- getRear()
- isEmpty()
- size()

## Applications

1. Single resource and multiple consumers, e.g. ticketing system
2. Synchronization between slow and fast devices
3. In operating systems (Semaphores, FCFS scheduling, spooling, buffers for devices like keyboard)
4. In computer networks (Routers/Switches and mail queues)
5. Variations: deque, priority queue and doubly ended priority queue.

## Queue using STL

All operations have O(1) time complexity

Queue can be implemented in any of underlying container that provides following operations:

- front
- back
- size
- empty
- push_back
- pop_front

List and dequeue all provide these functionalities. Thus, queue can be implemented using any of these containers. By default, queue is implemented using dequeue container.
Since queue is implemented using other containers and works as an interface, it is also called container adapter. Stack, priority queue are also container adapters.
All operation of queue are O(1) in all containers.
