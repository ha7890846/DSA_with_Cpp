# Sort Stack Using Recursion

A C++ program to sort a stack using recursion without using any additional data structures.

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

This program demonstrates how to sort the elements of a stack using recursion. The stack's original elements are printed before and after sorting.

## Problem Description

Given a stack of integers, the task is to sort the elements of the stack using recursion. You are not allowed to use any additional data structures such as another stack, array, etc.

### Requirements

1. **Stack Initialization**: Start with a pre-defined stack of integers.
2. **Sort the Stack**: Implement a function to sort the stack using recursion.
3. **Output**: Display the stack before and after sorting.

## How It Works

1. The program initializes a stack with some values.
2. The `sortStack` function is called to sort the stack.
3. The stack is printed before and after sorting to show the changes.

## Usage

### Compilation

To compile the program, use the following command:

```sh
g++ -o sort_stack sort_stack.cpp
