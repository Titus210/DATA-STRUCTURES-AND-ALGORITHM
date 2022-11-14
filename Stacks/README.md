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

2. __pop()__: <br>
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
