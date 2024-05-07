# Selection Sort Algorithm

## Overview

Selection sort is a simple comparison-based sorting algorithm. It works by dividing the input array into two parts: the sorted subarray and the unsorted subarray. The algorithm repeatedly selects the smallest (or largest, depending on the sorting order) element from the unsorted subarray and swaps it with the first unsorted element. This process continues until the entire array is sorted.

```bash
It does not folow the property of stability for the order of original array.
```
## Complexity Analysis

- Best Case Time Complexity: O(n^2) - The best-case time complexity occurs when the array is already sorted. In this case, selection sort still needs to scan the array to find the minimum element in each iteration, resulting in a time complexity of O(n^2).
- Average Case Time Complexity: O(n^2) - The average-case time complexity of selection sort is O(n^2) since it always scans the entire array to find the minimum element in each iteration.
- Worst Case Time Complexity: O(n^2) - The worst-case time complexity of selection sort is O(n^2) when the input array is in reverse sorted order. In this case, selection sort will perform the maximum number of comparisons and swaps.
- Space Complexity: O(1) - Selection sort is an in-place sorting algorithm, meaning it does not require additional storage space other than a few variables for storing indices and the minimum (or maximum) element.

## Implementation

The selection sort algorithm can be implemented in various programming languages.
![Diagram: ](https://github.com/ha7890846/DSA_with_Cpp/blob/main/diagram/Selection-Sort-Flowhchart.png)


```bash 
Example:
array  = { 4,5,2,6,9 };
sorted = { 2,4,5,6,9 };