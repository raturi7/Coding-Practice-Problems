lst=[]
while True:
    i=input()
    if(i=="done"):
        break
    else:
        try:
            lst.append(int(i))
        except:
            print("Invalid Input")

max=lst[0]
min=lst[0]

for i in lst:
    if max<i:
        max=i
    if min>i:
        min=i
print(f"Maximum is {max}")
print(f"Minimum is {min}")
