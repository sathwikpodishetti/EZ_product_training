def can_i_place_My_Cows(arr, min_dist, cows):
    last = arr[0]
    count = 1
    for i in range(1, len(arr)):
        if abs(last - arr[i]) >= min_dist:
            count += 1
            last = arr[i]
    if count >= cows:
        return True
    else:
        return False
def solve(arr, cows):
    limit = max(arr)-min(arr)
    for i in range(1, limit+1):
        if can_i_place_My_Cows(arr, i, cows) == True:
            continue
        else:
            return i-1
arr = list(map(int,input("place nums:").split(",")))
cows = int(input("no of cows:"))
result = solve(arr, cows)
print("max possible min distance between cows is:", result)