# Problem Statement : Count Digits.

Given an integer N, return the number of digits in N.

### Examples:

Example 1:

```
Input:N = 12345
Output:5
Explanation:  The number 12345 has 5 digits.
```

Example 2:

```
Input:N = 7789
Output: 4
Explanation: The number 7789 has 4 digits.
```

### Brute Force Approach

Algorithm:

- Step 1:Initialise a counter to store the number of digits.

- Step 2:While N is greater than 0, execute the following:
- Step 2.1: Divide N by 10 to remove the last digit.
- Step 2.2: Increment the counter by 1 to account for the removed digit
- Step 2.3: Update N to be the quotient of the division operation.
- Step 3: Return the counter as the number of digits in N.

#### Complexity:

- **Time Complexity:** _O(log N)_ because we are dividing N by 10 in each iteration, which
  is equivalent to reducing the number of digits by 1. The number of iterations is proportional to th
  number of digits in N, which is log N (base 10).
- **Space Complexity:** _O(1)_ because we are using a constant amount of space to store the counter

### Optimized Approach :

Algorithm:

- Step 1: Return the number of digits in N using the formula floor(log10(N))

#### Complexity:

- **Space Complexity:** _O(1)_ as only a constant amount of additional memory for the count variable regardless of size of the input number.
- **Time Complexity:** _O(1)_ because the logarithm function is a constant time operation.

### Reference:

- Log Table -[Click Here](https://www.logcalculator.net/common-log-10)
