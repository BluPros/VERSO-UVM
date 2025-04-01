#Removes all duplicate numbers in an array and returns the original array
def remove_duplicates(arr)
    #sorts array to insure dupilcates would be sequential
    arr.sort()
    unique_arr = []
    removed_elements = []
    #loops through array
    for i in range(size(arr)):
        #compares previous to current entry 
        if i == 0 or arr[i] != arr[i+1]:
            unique_arr.append(arr[i])
        #holds removed duplicates
        else:
            removed_elements.append(arr[i])
    return unique_arr

# Test the function
arr = [1, 2, 2, 3, 4, 4, 5]
unique_arr, removed_elements = remove_duplicates(arr)
print("Original array:", arr)
print("Unique array:", unique_arr)
print("Removed elements:", removed_elements)
