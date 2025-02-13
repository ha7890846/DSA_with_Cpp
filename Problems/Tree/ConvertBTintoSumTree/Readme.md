## Convert a Binary Tree into Sum Tree.
 A Sum Tree is a tree where the value of each node is equal to the sum of the values of its left and right subtrees.

# Example 1:
```
Input: root = [4,1,2,6,null,3,7]
Output: [10,2,12,1,null,11,null]
Explanation: For the given tree, the sum of the left and right subtrees of each node is calculated as follows:


      4                     23
     /\                   /    \
    /  \                 /      \
   1    2          ==>  10       9      
  / \   / \             / \     / \
 6   3 7   null        6   3   7   null

