# Insertion
One of the common operation of array is `insertion`. <br/>
Insertion is performed when position to be inserted is `less than ` the maximum array capacity <br/>
***

## Algorithm to insert elements
__Insertion__ of element at given position in an array
1. Input:
   - an array `A` of length `n`
   - an element `x` to be inserted
   - a position `p (0 <= p <= n)` where `x` will be inserted

2. Output:
    - the updated array `A` with `x` inserted at position `p`

3. Begin

4. `for i = n - 1 to p` step -1
    - `A[i + 1] = A[i]`     # shift elements to right

5. `A[p]` = x    # insert element x to position p

6.  End


##  Types of Insertions

Insertion is where an element is inserted into the array from the given points of array: <br/>
1. Beginning
Insertion at the beginning is performed when we set element position to `0`
```
    position = 0;

    array[position] = element;
```
2. Given Position
   Insertion at the beginning is performed when we set element position to `0`
```
    // ask user position to insert    

    // insert element at the given position inserted by user, position is the `array index + 1`  
    array[position + 1] = element;
```
3. Insertion at the end of Array: <br/>
Normal insertion of an element occurs at the end of ann array. <br/>
```
array[length] = element; // Insert element at the end of the array
```

## Time complexity
The time complexity of the insertion operation is O(n), where n is the size of the array. <br/>
This is because in the worst case scenario, the algorithm has to shift all the elements in the array to the right by one position to create space for the new element.

## Conclusion
Insertion is a basic operation and is used in arrays in many applications.
## Author
The program and description in this folder was written by [Titus Kiplagat](https://www.linkedin.com/in/titus-kiplagat-5146ba210/)


