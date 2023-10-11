def merge(left, right):
    result = []
    inv_count = 0
    i,j = 0,0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1 
        else:
            result.append(right[j])
            j += 1
            inv_count += len(left) - i
    result.extend(left[i:])
    result.extend(right[j:])
    return result, inv_count
    
def merge_sort(arr):
    if len(arr) <= 1:
        return arr, 0
    mid = len(arr)//2
    left_half = arr[:mid]
    right_half = arr[mid:]
    
    left_half, left_count = merge_sort(left_half)
    right_half, right_count = merge_sort(right_half)
    merged_arr, temp_count = merge(left_half, right_half)
    
    total_count = left_count + right_count + temp_count
    return merged_arr, total_count
arr = list(map(int,input().split(",")))
sorted_arr, count = merge_sort(arr)
print(sorted_arr, count)