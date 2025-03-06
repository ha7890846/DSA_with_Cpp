# Problem Statement : Remove Duplicates from Sorted Array

Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.
> Note: Return k after placing the final result in the first k slots of the array.

    If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.



### Examples:

Example 1:

```
Input:N = {1,1,1,1,1,2,2,2,2,3,3,3,4}
Output: 4
Explanation:  The Unique elements are 1,2,3,4.
```

Example 2:

```
Input:N = {2,2,2,2,2,2,2};
Output: 1
Explanation:  The Unique elements are 1.
```

### Brute Force Approach

Algorithm: Using Hashset

- Step 1: Declare a HashSet.
- Step 2: Run a loop to traverse the array.
    - Put every element of the array in the set.
- Step 3:Store size of the set in a variable K.
- Step 4:Now put all elements of the set in the array from the starting of the array.
- Step 5:Return K

#### Complexity:

- **Time Complexity:** _O(nlogn)+O(n)_ for storing the array in the set and then traversing the array.
- **Space Complexity:** _O(n)_ for storing the array in the set.

### Optimized Approach :

Algorithm: Two Pointer

- Step 1: Take a variable i as 0;
- Step 2: Use a for loop by using a variable ‘j’ from 1 to length of the array.
    - If arr[j] != arr[i], increase ‘i’ and update arr[i] == arr[j].
- Step 3: After completion of the loop return i+1, i.e size of the array of unique elements.

#### Complexity:

- **Time Complexity:** _O(N)_ for traversing the array.

- **Space Complexity:** _O(1)_ because we are using a constant amount of space to store the variables.

### Reference:

<!-- - GFG Problem -[Click Here](https://www.geeksforgeeks.org/second-largest-and-second-smallest-element-in-an-array/) -->
- LeetCode Problem -[Click Here](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

- Source Code -[Click Here](https://github.com/ha7890846/DSA_with_Cpp/blob/main/Problems/Arrays/RemoveDuplicateSortedArray)
