This project explores multiple implementations of queues in C++, inspired by the examples and exercises in Chapter 4 of a typical Data Structures curriculum. It covers static queues, dynamic template-based queues, and double-ended queues (deques), each illustrating different queue operations and concepts.

Example 4.1 demonstrates a basic static queue using arrays. It includes functions for enqueueing, dequeueing, and checking whether the queue is full or empty. Exercise 4.1 builds on this by implementing an array of queues to handle and process multiple sets of user input, highlighting the reusability of the queue class.

Example 4.2 introduces a template-based queue that supports various data types using dynamic memory allocation. It covers standard queue operations and enhances flexibility. In Exercise 4.2, this template queue is used with strings to store and remove friend names, showcasing the advantages of using templates for general-purpose data handling.

Exercise 4.3 focuses on the implementation of a double-ended queue (deque) using a circular array. It supports insertion and deletion from both the front and rear, employing the modulo operator for proper wrap-around functionality. This example adds complexity and versatility to the basic queue structure.

Exercise 4.4 applies a deque to check whether a given string is a palindrome. Characters are added from both ends and then compared by removing them from the front and back, integrating logical problem-solving with queue operations in a real-world context.

Collectively, these examples offer a comprehensive introduction to queues in C++, emphasizing index management, circular behavior, and code reusability through templates.