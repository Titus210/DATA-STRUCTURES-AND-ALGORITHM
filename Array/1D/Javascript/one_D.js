//initialize array
var array = [];

// prompting user to enter number of elements in an array

const num = prompt('Enter number of Elements in Array: ');

// loop through number of element and add them to array
for (var i = 0; i <= num; i++) {
    element = prompt('Enter element to store in array: ');
    array[i] = element;
}

// loop through elements in a array and print
for( var i = 0; i < array.length; i++){
    console.log(`The element at position ${i} is ${array[i]}`);
}
