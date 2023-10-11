def merge(left, right):
    result = []
    i,j = 0,0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1 
        else:
            result.append(right[j])
            j += 1
    result.extend(left[i:])
    result.extend(right[j:])
    return result
    
def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    mid = len(arr)//2
    left_half = arr[:mid]
    right_half = arr[mid:]
    
    left_half = merge_sort(left_half)
    right_half = merge_sort(right_half)
    merged_arr = merge(left_half, right_half)
    return merged_arr
arr = list(map(int,input().split(",")))
sorted_arr = merge_sort(arr)
print(*sorted_arr)