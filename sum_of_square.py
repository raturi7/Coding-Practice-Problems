def square(n):
    return int(n*n)

limit = input("Enter limit > ")
sum = 0
for i in range(1,int(limit)+1):
    sum += square(i)  
print(f"Sum: {sum}")