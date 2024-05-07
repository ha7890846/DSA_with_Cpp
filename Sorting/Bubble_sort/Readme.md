# Bubble Sort Algorithm

## Overview

Bubble sort is a simple comparison-based sorting algorithm. It works by repeatedly swapping adjacent elements if they are in the wrong order. The algorithm passes through the array multiple times, each time bubbling up the largest unsorted element to its correct position.

```bash
It contains the property of stability for the order of original array.
```
## Complexity Analysis

- Best Case Time Complexity: O(n) - The best-case time complexity occurs when the input array is already sorted. In this case, bubble sort will make a single pass through the array without any swaps, resulting in a time complexity of O(n).
- Average Case Time Complexity: O(n^2) - The average-case time complexity of bubble sort is O(n^2) since it requires multiple passes through the array, swapping adjacent elements if they are in the wrong order.
- Worst Case Time Complexity: O(n^2) - The worst-case time complexity of bubble sort is O(n^2) when the input array is in reverse sorted order. In this case, bubble sort will make the maximum number of passes and swaps.
- Space Complexity: O(1) - Bubble sort is an in-place sorting algorithm, meaning it does not require additional storage space other than a few variables for storing indices and temporary values.

## Implementation

The bubble sort algorithm can be implemented in various programming languages.
![Diagram: ](https://github.com/ha7890846/DSA_with_Cpp/blob/main/diagram/bubble-sort1.png)
 


```bash demo test cases:
Example:
array  = { 7,4,2,6,9,3 };
sorted = { 2,3,4,6,7,9 }; 