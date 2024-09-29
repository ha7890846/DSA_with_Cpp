## Types of Traversal a Binary Tree.
There are Three types of traversal in a binary tree: Inorder Traversal, Preorder Traversal & PostOrder Traversal. 

## **InOrder Traversal :**
In Inorder Traversal, we first visit the left subtree, then the root node and finally the
right subtree.
```
- Term To Remember: Left Current Right -> ( LCR )
- Use this term over the every Node.
```
Inorder Traversal is used to get the elements in sorted order.

#### Follow the below steps to implement the idea:
```
- Traverse left subtree
- Visit the root and print the data.
- Traverse the right subtree
```
## **PostOrder Traversal :**
In PostOrder Traversal, we first visit the left subtree, then the right subtree and finally the
root node.
```
- Term To Remember: Left Right Current -> ( LRC )
- Use this term over the every Node.
```
#### Follow the below steps to implement the idea:
```
- Traverse left subtree
- Traverse the right subtree
- Visit the root and print the data.
```

## **PreOrder Traversal :**
In PreOrder Traversal, we first visit the root node and then the left and right subtrees
```
- Term To Remember: Current Left Right -> ( CLR )
- Use this term over the every Node.
```
#### Follow the below steps to implement the idea:
```
- Visit the root and print the data.
- Traverse left subtree
- Traverse the right subtree
```