# Binary Search Algorithm

## Overview

This C++ program demonstrates the Binary Search algorithm using recursion to find a target element in a sorted vector. Binary Search is an efficient algorithm for finding an element in a sorted array or vector by repeatedly dividing the search interval in half.

## Time Complexity

The time complexity for the binary search algorithm is O(log n), where n is the number of elements in the array or vector. This is because at each step, the search space is halved.

## Space Complexity

- **Vector:** The space complexity for the vector is O(n), where n is the number of elements in the vector.
- **Function Call Stack:** The space complexity for additional variables used in the function call stack is O(log n) due to the recursive nature of the binary search function.

## Instructions

1. Compile the code using a C++ compiler.
2. Execute the compiled binary to run the program.

## Running Tests

To run tests, run the following command

```bash
Input:  arr = {10,15,20,25,27,28,29,30};
        target = 15         
Output = 1 (index value.)
```
```bash
Input:  arr = {10,15,20,25,27,28,29,30};
        target = 5;     
Output = -1 (Not found.)
```
```bash
Input:  arr = {12,14,22,24,28,28,29,30,35};
        target = 30;     
Output = 7 (index value.)
```



## Complexity Analysis :


| Type                | Description                |
| :-------            | :------------------------- |
| `Time Complexity`   | O( log n )        |
| `Space Complexity`  | O( n )           |
