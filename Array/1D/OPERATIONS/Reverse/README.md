#	ARRAY REVERSAL
This is the process of reversing order of element in an array. <br/>
```
	// original array
	int array[5] = {1,2,3,4,5}

	// reversed array
	int array[5] = {5,4,3,2,1}
```
***
## Ways Of reversing
There are two ways of reversing an array: <br/>
1. Inplace reversal
2. Create a new reverse array <br/>

__Inplace Reversal__: This is reversing the elements within the same array without having an additional memory. <br/>
This can be done by swapping elements at the begiing and en of array towards the center. `implemented using pointers` <br/>
__Algorithm__: <br>
1. Start
2. Declare Start, End Pointers
- 	Temp to store temporary data
-	Array, size of array
3. WHILE Start is Less than End Repeat
4. temp:= start
5. start:= end
6. end:= temp
7. Increment start
8. Decrement end
This is an effective way to reverse an array with the following Complexity:
- Time: 0(n)
- Space: 0(1)
***
##	Application of Array Reversal
1. String reversal
2. Parsing Expression
3. Palidrome detection
4. File reversal
5. Image Processing
6. Graph Algorithm
7. Game development
8. Audio Processing
9. Machine Learning
10. Search Algorithm
