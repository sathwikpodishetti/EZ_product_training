input_str = input("Enter a list of elements separated by spaces: ")
stack = input_str.split()  
print(*stack)
count = 0
result = "true"
# if len(stack)%2!=0 :
#     result = "false"
# else :
for i in range(len(stack)-1):
    for j in range(len(stack)-1,0,-1):
        if stack[i]=='(' and stack[j]==')':
            result = "true"
            #count = count + 1
        elif stack[i]=='{' and stack[j]=='}':
            result = "true"
            #count = count + 1
        elif stack[i]=='[' and stack[j]==']':
            result = "true"
            #count = count + 1
        else :
            result = "false"
            count = i
            
print(result)
print(count)

