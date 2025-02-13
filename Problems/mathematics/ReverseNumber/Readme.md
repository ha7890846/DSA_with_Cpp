# Reverse Number -

Given an integer N return the reverse of the given number.

> Note: If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.

#### Examples

Example 1:

```
Input: N = 1234
Output: 4321
```

Example 2:

```
Input: N = 540
Output: 45
```

## Complexity Analysis :

### bruteForce -

This function converts the integer into a string, reverses the string, and then converts it back into an integer.

#### Steps:

- to_string(num): Converts num into a string → O(d) time (where d is the number of digits in num).
- str.size(): Computes the size of the string → O(1) time.

* Reversing the string using two-pointer swap:
  - Runs a while loop with s and e, swapping characters.
    - This takes O(d/2) = O(d) time.

- stoi(str): Converts the reversed string back to an integer → O(d) time.

##### overall:

- **Time Complexity:**/
  O(d) + O(d) + O(d) = O(d)
- **Space Complexity:**
  Stores the string str → O(d) space.
  Overall, O(d) extra space is used.

### Optimized:

This function reverses the integer without using extra space.

#### Steps:

- Initializes rev = 0 → O(1).
- Runs a while loop:
  - Extracts the last digit (num % 10).
  - Adds it to rev after shifting (rev = rev \* 10 + lastDigit).
  - Removes the last digit from num (num = num / 10).
- The loop runs d times, where d is the number of digits.

##### overall:

- **Time Complexity:**
  Each iteration does constant work → O(d) time.
- **Space Complexity:**
  Uses only a few integer variables (rev, num) → O(1) space.

## Comparison:

> The optimized method is much better in terms of space complexity because it does not use an extra string.

| Approach   | Time | Space |
| :--------- | :--: | ----: |
| bruteForce | O(d) |  O(d) |
| optimized  | O(d) |  O(1) |

