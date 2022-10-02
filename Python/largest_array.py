from input import enter

lst = []
size = input("Enter Size of Array > ")
enter(lst,size)
print(lst)

lar=lst[0]
i=1
for i in lst:
    if int(lar)<int(i):
        lar = i
print(f"Largest Element in List is {lar}")
