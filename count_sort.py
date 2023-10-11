def count_sort(arr):
    max_ele = max(arr)
    count_arr = [0]*(max_ele+1)
    
    for ele in arr:
        count_arr[ele] += 1
        
    for i in range(1, len(count_arr)):
        count_arr[i] = count_arr[i] + count_arr[i-1]
    
    output = [0] * len(arr)
    i = len(arr)-1
    while i>=0:
        curr = arr[i]
        count_arr[curr] -= 1 
        pos = count_arr[curr]
        output[pos] = arr[i]
        i -= 1
    return (output)
arr = list(map(int,input().split(",")))
result = count_sort(arr)
print(*result)