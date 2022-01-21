def cubes(n):
    return int(n*n*n)

limit = input("Enter Limit > ")
sum = 0
for i in range(1,int(limit)+1):
    sum += cubes(i)  
print(f"Sum: {sum}")