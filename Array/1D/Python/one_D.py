def oneDimensional():
    arr = []
    element = None
    try:
        noOfElements = int(input("Enter number of elements to insert: "))
    except ValueError:
        print("Please enter an integer")
        oneDimensional()

    # insert elements to list
    for i in range(noOfElements):
        element = input("Please enter element to insert: ")
        arr.append(element)
        i = i + 1

    # print all the elements
    for i in range(len(arr)):
        print(f"The value at index {i} is {arr[i]}")


oneDimensional()
