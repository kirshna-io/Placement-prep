##unique element 
##### WITH FUNCTION ###

def find_unique(arr):
    unique_element = 0
    for num in arr:
        unique_element ^= num
    return unique_element

# Example
arr = [1, 2, 3, 4, 3, 2, 1]
print("Unique element:", find_unique(arr))



####### WITHOUT FUNCTION ####

arr = [1, 2, 3, 4, 3, 2, 1]
unique_element = 0
for num in arr:
    unique_element ^= num

print("Unique element:", unique_element)
