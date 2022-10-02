from input import enter

lst = []
size = int(input("Enter Size of List > "))
enter(lst,size)
print(f"List = {lst}")

sum = 0
for i in range(int(size)):
    sum+=int(lst[i])

print(f"Sum of All Elements in array is {sum}")
