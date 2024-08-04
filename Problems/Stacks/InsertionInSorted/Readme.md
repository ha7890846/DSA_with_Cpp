# Sorted Stack

A C++ program that inserts a given value into a stack while maintaining the stack's sorted order.

## Table of Contents
1. [Introduction](#introduction)
2. [Problem Description](#problem-description)
3. [How It Works](#how-it-works)
4. [Usage](#usage)
5. [Code Explanation](#code-explanation)
6. [License](#license)

## Introduction

This program demonstrates how to insert an integer value into a stack while keeping the stack sorted in descending order. It uses recursion to achieve this.

## Problem Description

Stacks are data structures that follow the Last In, First Out (LIFO) principle. The challenge here is to insert a new integer into an existing stack such that the stack remains sorted in descending order. This requires careful handling of the stack elements and the use of recursion to ensure the correct placement of the new element.

### Requirements

1. **Stack Initialization**: Start with a pre-defined stack of integers.
2. **User Input**: Accept a new integer value from the user.
3. **Insertion**: Insert the new value into the stack while maintaining the sorted order.
4. **Output**: Display the stack before and after the insertion.

## How It Works

1. The program initializes a stack with some values.
2. The user is prompted to input a value.
3. The `sortedStack` function is called to insert the value into the stack while maintaining the sorted order.
4. The stack is printed before and after the insertion to show the changes.

## Usage

### Compilation

To compile the program, use the following command:

```sh
g++ -o sorted_stack sorted_stack.cpp
