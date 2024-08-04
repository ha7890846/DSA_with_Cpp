# Find the Middle Element in a Stack

A C++ program that finds and prints the middle element of a stack without removing it permanently, and then restores the stack to its original state.

## Table of Contents
1. [Introduction](#introduction)
2. [Problem Description](#problem-description)
3. [How It Works](#how-it-works)
4. [Usage](#usage)
5. [Code Explanation](#code-explanation)
6. [Complexity Analysis](#complexity-analysis)
7. [License](#license)

## Introduction

This program demonstrates how to find the middle element of a stack using recursion. The stack is restored to its original state after the middle element is found.

## Problem Description

Stacks are data structures that follow the Last In, First Out (LIFO) principle. The challenge here is to find the middle element of a stack without permanently removing any elements, and to restore the stack to its original state after the operation.

### Requirements

1. **Stack Initialization**: Start with a pre-defined stack of integers.
2. **Find Middle Element**: Implement a function to find and print the middle element of the stack.
3. **Restore Stack**: Ensure the stack is restored to its original state after the middle element is found.
4. **Output**: Display the stack before and after finding the middle element.

## How It Works

1. The program initializes a stack with some values.
2. The `midElement` function is called to find and print the middle element.
3. The stack is printed before and after finding the middle element to show that the stack is restored.

## Usage

### Compilation

To compile the program, use the following command:

```sh
g++ -o mid_element_stack mid_element_stack.cpp
