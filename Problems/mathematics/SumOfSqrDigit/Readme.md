# Sum of Digit's Squares.
## Problem Description


Given a positive integer `num`, repeatedly calculate the sum of the squares of its digits until the number is reduced to a single-digit. Once a single-digit number is obtained, return the square of that digit.

### Example 1:
**Input:** `num = 123`  
**Output:** `1`  
**Explanation:** 
- 1² + 2² + 3² = 14
- 1² + 4² = 17
- 1² + 7² = 50
- 5² + 0² = 25
- 2² + 5² = 29
- 2² + 9² = 85
- 8² + 5² = 89
- 8² + 9² = 145
- 1² + 4² + 5² = 42
- 4² + 2² = 20
- 2² + 0² = 4 (single-digit)
- Final answer: 4² = 16

### Example 2:
**Input:** `num = 987`  
**Output:** `9`  
**Explanation:** 
- 9² + 8² + 7² = 194
- 1² + 9² + 4² = 98
- 9² + 8² = 145
- 1² + 4² + 5² = 42
- 4² + 2² = 20
- 2² + 0² = 4 (single-digit)
- Final answer: 4² = 16

### Constraints:
- The input `num` is a non-negative integer.
