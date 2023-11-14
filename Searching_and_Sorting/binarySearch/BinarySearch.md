## Binary Search Algorithm -

Binary search is the search technique that works efficiently on sorted lists. Hence, to search an element into some list using the binary search technique, we must ensure that the list is sorted.

Binary search follows the divide and conquer approach in which the list is divided into two halves, and the item is compared with the middle element of the list. If the match is found then, the location of the middle element is returned. Otherwise, we search into either of the halves depending upon the result produced through the match.

    ## Drawbacks of Binary Search:
    The array should be sorted in increasing or decreasing order (Monotonic order).

## Advantages of Binary Search:
Binary search is faster than linear search, especially for large arrays.\
More efficient than other searching algorithms with a similar time complexity, such as interpolation search or exponential search.\
Binary search is well-suited for searching large datasets that are stored in external memory, such as on a hard drive or in the cloud.

    TIP:- Binary search requires that the data structure being searched be stored in contiguous memory locations. 

Binary search can be used as a building block for more complex algorithms used in machine learning, such as algorithms for training neural networks or finding the optimal hyperparameters for a model.
## Demo

https://dev-habibshah.netlify.app/


## Running Tests

Test Cases:

```bash
  Case I:
  arr =    1,2,3,4,5,6
  target = 5 .
  O/P = 4 th index.
```

```bash
  Case II:
  arr = 12,14,15,20,60,70,80
  target : 20
  O/P : 3 rd index.
```
## Complexity Analysis :
## Time Complexity: 

    Best Case: O(1)
    Average Case: O(log N)
    Worst Case: O(log N)
## Space Complexity
    AuxiliarySpace : O(1),
    If the recursive call stack is considered then the auxiliary space will be O(logN).