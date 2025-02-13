# STL Priority Queue, Map, and Set in C++

This repository contains my practice code and implementations of **STL Priority Queue**, **Map**, and **Set** in C++. The goal of this project is to understand these Standard Template Library (STL) containers, their functionalities, and their use cases.

## Table of Contents
1. [Introduction](#introduction)
2. [STL Containers](#stl-containers)
   - [Priority Queue](#priority-queue)
   - [Map](#map)
   - [Set](#set)
3. [Implementation Details](#implementation-details)
4. [Usage](#usage)
5. [Problems Solved](#problems-solved)
6. [Resources](#resources)
7. [Contributing](#contributing)

---

## Introduction
The C++ Standard Template Library (STL) provides powerful container classes that simplify data storage and manipulation. This repository focuses on three key STL containers:
1. **Priority Queue**: A container that allows efficient retrieval of the largest (or smallest) element.
2. **Map**: An associative container that stores key-value pairs in a sorted order.
3. **Set**: A container that stores unique elements in a sorted order.

---

## STL Containers

### Priority Queue
- A **priority queue** is a container adapter that provides constant-time access to the largest (by default) element.
- Implemented as a max-heap by default (can be configured as a min-heap).
- Common operations:
  - `push()`: Insert an element.
  - `pop()`: Remove the top element.
  - `top()`: Access the top element.
  - `empty()`: Check if the queue is empty.
  - `size()`: Get the number of elements.

### Map
- A **map** is an associative container that stores key-value pairs in a sorted order based on the keys.
- Implemented as a balanced binary search tree (usually a Red-Black Tree).
- Common operations:
  - `insert()`: Add a key-value pair.
  - `find()`: Search for a key.
  - `erase()`: Remove a key-value pair.
  - `size()`: Get the number of key-value pairs.
  - `begin()`, `end()`: Iterate over the map.

### Set
- A **set** is a container that stores unique elements in a sorted order.
- Implemented as a balanced binary search tree (usually a Red-Black Tree).
- Common operations:
  - `insert()`: Add an element.
  - `find()`: Search for an element.
  - `erase()`: Remove an element.
  - `size()`: Get the number of elements.
  - `begin()`, `end()`: Iterate over the set.

---

## Implementation Details
The following C++ files are included in this repository:
1. **`PriorityQueue.cpp`**: Demonstrates the usage of STL `priority_queue`.
2. **`Map.cpp`**: Demonstrates the usage of STL `map`.
3. **`Set.cpp`**: Demonstrates the usage of STL `set`.

Each file includes examples of:
- Declaration and initialization.
- Insertion and deletion.
- Accessing elements.
- Iterating through the container.

---

## Usage
To compile and run the code:
```bash
g++ PriorityQueue.cpp -o PriorityQueue
./PriorityQueue

g++ Map.cpp -o Map
./Map

g++ Set.cpp -o Set
./Set