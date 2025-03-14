#unsorted_array = [2,4,1,5,3]


stringinput = input("Enter the input: ")

integerlist = []
stringsplit = stringinput.split()

for i in stringsplit:
    integerlist.append(int(i))

for i in range(len(integerlist)): # Iterate through each element in the list
    temp = i  # Assume the current element is the smallest
    for j in range(i+1,len(integerlist)):  # Iterate through the rest of the list
        if(integerlist[temp]>integerlist[j]):
            temp = j  # Update temp to index of the new smallest element
        else:
            continue
        
    # Swap the found smallest element with the element at position i
    temp_value = integerlist[i]
    integerlist[i] = integerlist[temp]
    integerlist[temp] = temp_value

print("After sorting: ",end="")
for element in integerlist:
    print(element, end=" ")
    