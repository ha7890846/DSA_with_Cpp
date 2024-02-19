# Factorial Calculator

## Overview

This C++ program calculates the factorial of a given integer using a recursive function. The factorial of a non-negative integer n, denoted as n!, is the product of all positive integers less than or equal to n.

## Time Complexity

The time complexity of the factorial calculation algorithm is O(n), where n is the given integer for which the factorial is being calculated. This is because the algorithm performs n multiplications to calculate the factorial.

## Space Complexity

The space complexity of the recursive function is O(n) due to the function call stack, as the function recurses n times before reaching the base case.

## Integer Range

The integers used in this program are assumed to be within the range of a 32-bit signed integer (-2,147,483,648 to 2,147,483,647) unless explicitly mentioned otherwise.

## Instructions

1. Compile the code using a C++ compiler.
2. Execute the compiled binary to run the program.
3. Enter a non-negative integer when prompted.

## Additional Notes
- This program run only for generate output from integer range.
- The program uses a recursive approach to calculate the factorial, which may lead to stack overflow for large input values.
- Ensure that the input integer is non-negative as factorial is not defined for negative integers.
- Modifications or enhancements can be made to handle edge cases or improve efficiency based on specific requirements or use cases.

![Logo](https://github.com/ha7890846/DSA_with_Cpp/blob/main/Recursion/recursion.jpg)
## Running Tests

To run tests, run the following command

```bash
Input:  Num = 8;    
Output: Facto = 40320 ;
```
```bash
Input:  Num = 5;    
Output: Facto = 120 ;
```
```bash
Input:  Num = 10;    
Output: Facto = 3628800 ;
```



## Complexity Analysis :


| Type                | Description                |
| :-------            | :------------------------- |
| `Time Complexity`   | O( n )        |
| `Space Complexity`  | O( n )           |
