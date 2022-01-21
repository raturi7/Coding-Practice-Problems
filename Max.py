def max(num1,num2):
    if(num1>num2):
        return num1
    else:
        return num2
    

print("Enter 2 numbers")
num1 = int(input())
num2 = int(input())
ans = max(num1,num2)
print(f"Maximum of {num1} & {num2} is {ans}")