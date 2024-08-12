# Queue Operations in C++

A C++ program that demonstrates basic operations on a queue, such as enqueuing, dequeuing, and checking the front and rear elements.

## Table of Contents
1. [Introduction](#introduction)
2. [Problem Description](#problem-description)
3. [How It Works](#how-it-works)
4. [Usage](#usage)
5. [Sample Input and Output](#sample-input-and-output)
6. [Code Explanation](#code-explanation)
7. [Complexity Analysis](#complexity-analysis)
8. [License](#license)

## Introduction

This program demonstrates how to perform basic operations on a queue in C++. A queue is a first-in, first-out (FIFO) data structure where elements are inserted at the back and removed from the front.

## Problem Description

The goal is to implement and demonstrate basic operations on a queue, such as:

1. **Enqueuing**: Adding elements to the back of the queue.
2. **Dequeuing**: Removing elements from the front of the queue.
3. **Checking the Front Element**: Viewing the element at the front of the queue without removing it.
4. **Checking the Rear Element**: Viewing the element at the back of the queue.

### Requirements

1. **Queue Initialization**: Start with an empty queue.
2. **Perform Queue Operations**: Implement functions to enqueue, dequeue, and check front and rear elements.
3. **Output**: Display the queue after each operation.

## How It Works

1. The program initializes an empty queue.
2. Elements are enqueued to the queue using the `push()` function.
3. An element is dequeued using the `pop()` function.
4. The front and rear elements are accessed using `front()` and `back()` functions, respectively.
5. The queue is printed after each operation to show the current state.

## Usage

### Compilation

To compile the program, use the following command:

```sh
g++ -o queue_operations queue_operations.cpp
