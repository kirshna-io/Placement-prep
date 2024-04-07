//binary and linear search 
def binary_search(arr, key):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == key:
            return mid  # Return the index if found
        elif arr[mid] < key:
            low = mid + 1  # Search in the right half
        else:
            high = mid - 1  # Search in the left half
    return -1  # Return -1 if not found

arr = [1, 3, 5, 7, 9, 11, 13, 15]
key = 11
index = binary_search(arr, key)
if index != -1:
    print(f"Element {key} found at index {index}")
else:
    print(f"Element {key} not found")




###  LINEAR SEARCH ####


arr=list(map(int,input().split()))
key=int(input())
for i in range(len(arr)):
    if arr[i] == key:
        print(i)
    else:
        print("not found")
        break
    



    
