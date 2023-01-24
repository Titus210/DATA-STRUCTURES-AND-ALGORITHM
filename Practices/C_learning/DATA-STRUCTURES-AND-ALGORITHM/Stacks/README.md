# STACK DATA STRUCTURE

This is a linear/ sequential data structure thar operates in LIFO and FILO patterns. <br>
__LIFO__: Last In First Out. <br>
__FILO__: First In Last Out. <br>
The patters is implemented in most of our worldy problems i.e. <br>

- Stack of Plates
- Cards
- Stack Of Books
- Bullets in magazene

Stacks re bounded i.e they have predefined capacity.
 Stack have one __entry__ and __exit__ point which is __top__.

## Operations

 1. __push()__: <br>
 This is an operation when an element is inserted into the stack. <br>
 The basic steps is as follows:

 >       Check if stack is full: __stackoverflow__ occurs if true
 >       Increment top
 >       Insert element on top of stack:

### __Algorithm__: <br>

 ```
    start:
        is stack full():
            if stack full then stack overflow
            else:
            increment top:
            insert element on top of stack
    stop:
```

2.  __pop()__: <br>
This is operation when an element is removed from stack <br>
The basic steps is as follows:

>         Check is stack is empty: __stackundeflow__ occurs if true
>         Remove element from top of stack
>         Decrement top
>         Return item poped

### __Algorithm__: <br>

 ```
    start:
        is stack  empty():
            if true then stack underflow
            else:
                remove element on top of stack
                decrement  top:
                return popped element

    stop:
```
3. __isEmpty()__: <br>
Checks if the stack is empty

### __Algorithm__: <br>

 ```
    start:
        if top equal -1
            return true
        else
        return false   
    stop:
```
4. __isFull()__: <br>
Checks if the stack is full

### __Algorithm__: <br>

 ```
    start:
        if top equal max size
            return true
        else
        return false   
    stop:
```

5. __Peek()__: <br>
Access Element at a given position

### __Algorithm__: <br>

 ```
    start:
        input position to access
            return element at position
    stop:
```
6. __Count()__: <br>
Access Element at a given position

### __Algorithm__: <br>

 ```
    start:
    declare count to 0;
        loop through elements
        increment count on each loop
    stop:
```
7. __Top()__: <br>
Return last element without removing

### __Algorithm__: <br>

 ```
    start:
        return stack[top]
    stop:
```
8. __Change__: <br>
Change An element of stack at a given position

### __Algorithm__: <br>

 ```
    start:
        input value to change
        input position to change
        return stack[pos] = value
    stop:
```

