# Insert at Beginning of a Stack

A C++ program that inserts a given value at the beginning of a stack without using any additional data structures.

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

This program demonstrates how to insert a new integer value at the bottom of a stack using recursion. The stack's original elements are preserved and printed before and after the insertion.

## Problem Description

Stacks are data structures that follow the Last In, First Out (LIFO) principle. The challenge here is to insert a new integer at the bottom of a stack without using any additional data structures, and to restore the stack to its original order after the operation.

### Requirements

1. **Stack Initialization**: Start with a pre-defined stack of integers.
2. **Insert at Beginning**: Implement a function to insert a new value at the bottom of the stack.
3. **Restore Stack**: Ensure the stack is restored to its original order after the insertion.
4. **Output**: Display the stack before and after the insertion.

## How It Works

1. The program initializes a stack with some values.
2. The `insertAtBegin` function is called to insert a new value at the bottom of the stack.
3. The stack is printed before and after the insertion to show the changes.

## Usage

### Compilation

To compile the program, use the following command:

```sh
g++ -o insert_at_beginning insert_at_beginning.cpp
