n = int(input())
num = 1
arr = [[""]*(n+1) for _ in range(n+1)]
j=0
for i in range(1,n+1):
    if i%2==0:
        for j in range(n,0,-1):
            arr[j][i]=num
            num +=1
    else:
        for j in range(1,n+1):
            arr[j][i]=num
            num +=1
row =1    
for row in arr:
    print(" ".join(map(str,row)))