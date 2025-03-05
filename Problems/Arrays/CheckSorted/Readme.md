# Problem Statement : Count Digits.

Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

### Examples:

Example 1:

```
Input:N = {10,40,30,20,50}
Output: False
Explanation:  The number 40 is greater thn 30.
```

Example 2:

```
Input:N = {1,22,34,54,62,73,83,90,100}
Output: True
Explanation:  All element is greater than the previous element.
```

### Brute Force Approach [Using Two Loop]

Algorithm:

- Step 1: Traverse the array from left to right.
    - Compare all the future element to the current element Using nested loop.
    - If the current element is greater than the future element then return False.
- Step 2: If the loop completes then return True.


#### Complexity:

- **Time Complexity:** _O(N**2)_ For sorting the array.
- **Space Complexity:** _O(1)_ because we are using a constant amount of space to store the var

### Optimized Approach :

Algorithm:

- Step 1: Traverse the array from left to right.
- Step 2: We will check every element with its previous element if the previous element is smaller than or equal to the current element then we will move to the next index.
- Step 3: If the whole array is traversed successfully or the size of the given array is zero or one (i.e N = 0 or N = 1). Then we will return True else return False.
#### Complexity:

- **Time Complexity:** _O(N)_ for traversing the array.

- **Space Complexity:** _O(1)_ because we are using a constant amount of space to store the variables.

### Reference:

- GFG Problem -[Click Here](https://www.geeksforgeeks.org/check-if-an-array-is-sorted-or-not/)
- Source Code -[Click Here]()
