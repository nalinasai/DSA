# First line input: The user is asked to input the size of the list (number of elements)
# Second line input: The user is asked to input a space-separated string of integers

size_of_list = int(input("input the size of list: "))
unsorted_string_list = input("input the unsorted integers with spaces: ")

# Initialize an empty list to store the integers
input_list = []
unsorted_list = unsorted_string_list.split()

# Convert the string elements into integers and append them to input_list
for element in unsorted_list:
    input_list.append(int(element))


# Loop through the list starting from the second element (index 1)
for i in range(1,size_of_list):
    key = input_list[i]
    j = i-1
    while(j>=0 and key<input_list[j]):
        input_list[j+1] = input_list[j]
        j = j-1
    input_list[j+1] = key

for i in input_list:
    print(i, end=" ")

