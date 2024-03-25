# Insertion Sort Algorithm

## Overview

Insertion sort is a simple sorting algorithm that builds the final sorted array one element at a time. It iterates through the input array and at each iteration, it removes one element from the input data, finds the location it belongs to in the sorted list, and inserts it there. It repeats this process until no input elements remain.
```note:
it known as the most efficient sorting algo for small array, It is a stable and in-place Sorting algorithm.

## Complexity Analysis

- Best Case Time Complexity: O(n) - The best-case time complexity occurs when the input array is already sorted. In this case, each element is compared with its previous elements and no shifting is required, resulting in a time complexity of O(n).
- Average Case Time Complexity: O(n^2) - The average-case time complexity of insertion sort is O(n^2) since it requires comparing and shifting elements for each insertion.
- Worst Case Time Complexity: O(n^2) - The worst-case time complexity of insertion sort is O(n^2) when the input array is in reverse sorted order. In this case, insertion sort will perform the maximum number of comparisons and shifts.
- Space Complexity: O(1) - Insertion sort is an in-place sorting algorithm, meaning it does not require additional storage space other than a few variables for storing indices and the key element.

## Implementation

The insertion sort algorithm can be implemented in various programming languages.