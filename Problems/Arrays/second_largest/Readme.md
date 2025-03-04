# Problem Statement : Count Digits.

Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

### Examples:

Example 1:

```
Input:N = {10,40,30,20,50}
Output: 40
Explanation:  The number Large is 50 and second largest is 40.
```

Example 2:

```
Input:N = {1,22,63,54,35,62,73,83,9,10}
Output: 73
Explanation:  The number Large is 83 and second largest is 73.
```

### Brute Force Approach [this approach only works if there are no duplicates]

Algorithm:

- Step 1: Sort the array in ascending order
- Step 2: The element present at the second index is the second smallest element
- Step 3: The element present at the second index from the end is the second largest element

#### Complexity:

- **Time Complexity:** _O(log N)_ For sorting the array.
- **Space Complexity:** _O(1)_ because we are using a constant amount of space to store the var

### Optimized Approach :

Algorithm:

- Step 1: Initialise two variables large and second_large to store the largest and second largest element in the array.
- Step 2: Traverse the array from left to right.
  - If the current element is larger than ‘large’ then update second_large and large variables
  - Else if the current element is larger than ‘second_large’ then we update the variable second_large.
- Step 3: Print the values of second_large and large variables.

#### Complexity:

- **Time Complexity:** _O(N)_ for traversing the array.

- **Space Complexity:** _O(1)_ because we are using a constant amount of space to store the variables.

### Reference:

- GFG Problem -[Click Here](https://www.geeksforgeeks.org/second-largest-and-second-smallest-element-in-an-array/)

- Source Code -[Click Here](https://github.com/ha7890846/DSA_with_Cpp/blob/main/Problems/Arrays/second_largest/second_largest.cpp)
