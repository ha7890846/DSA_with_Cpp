# String Operations in C++

This C++ program demonstrates various string operations such as initialization, traversing, iterators, and modification. 

These all operation handled by through `<string>` header file.

## Functions

### 1. Initialization

The `initialization()` function demonstrates different methods of initializing strings, including direct assignment, using `string()` constructor, and user input via `getline()` function.

### 2. Traversing

The `traversing()` function illustrates different techniques for traversing through a string, including using array indexing (`[]`), the `at()` function, and accessing the first and last characters of the string using `front()` and `back()` functions.

### 3. Iterators

The `iterators()` function showcases the use of iterators to iterate through the characters of a string. It demonstrates the use of forward iterators (`begin()` and `end()`), reverse iterators (`rbegin()` and `rend()`), and constant iterators (`cbegin()` and `cend()`).

### 4. Modification

The `modification()` function demonstrates various methods for modifying strings, such as appending (`append()`), assigning (`assign()`), and inserting (`insert()`).

## Complexity Analysis

### Initialization

- Time Complexity: O(n)
- Space Complexity: O(n)

### Traversing

- Time Complexity: O(n)
- Space Complexity: O(1)

### Iterators

- Time Complexity: O(n)
- Space Complexity: O(1)

### Modification

- Time Complexity: O(n)
- Space Complexity: O(1)

## Usage

Compile the code using a C++ compiler and run the executable. Choose an operation by entering the corresponding number:
1. Initialization
2. Traversing
3. Iterators
4. Modification

Follow the on-screen instructions to perform the selected operation on strings.

## Example

```bash
$ g++ program.cpp -o program
$ ./program
choose any operation by num:
1. Initialization.
2. Traversing.
3. Iterators.
4. Modification
Enter operation Num: 1
