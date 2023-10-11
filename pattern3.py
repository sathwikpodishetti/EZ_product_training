n = int(input("enter matrix size:"))
num=(n//2)+1
if(n%2!=0):
    k=0
    for i in range((n//2)+1):
        for l in range(1,k+1):
            print(num-l+1,end=" ")
        for j in range(k,n-k):
            print(num-k,end=" ")
        for r in range(n-k,n):
            print(num-(n-r)+1,end=" ")
        print("")
        k+=1
    k=1
    for i in range((n//2)+1,n):  
        for p in range(0,(n//2)-k):
            print(num-p,end=" ")
        for j in range((n//2)-k,(n//2)+k+1):
            print(k+1,end=" ")
        for q in range((n//2)+k+1,n):
            print(num-(n-q)+1,end=" ")
        print("")
        k+=1
else:
    print("give even input only")