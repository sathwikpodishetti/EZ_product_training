def solve(arr,target):
    p1 = 0
    p2 = len(arr)-1
    while p1<p2:
        sum = arr[p1] + arr[p2]
        if sum == target:
            return (arr[p1], arr[p2])
        elif sum < target:
            p1 += 1
        else:
            p2 -= 1
    return False
    
arr = list(map(int,input().split(",")))
target = int(input())
result = solve(arr,target)
print(result)