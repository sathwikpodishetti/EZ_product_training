arr=list(map(int,input().split()))
count=0
for i in range (len(arr)):
    for j in range (0,(len(arr)-i)):
        if arr[j]>=arr[j+1]:
            temp=arr[j+1]
            arr[j+1]=arr[j]
            arr[j]=temp
            count=1
    if count==0:
        break;
            
print(*arr)