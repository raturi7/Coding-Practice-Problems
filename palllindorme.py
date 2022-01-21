def pallindrome(num):
    rev = 0
    while(int(num)>0):
        r = num%10
        rev =rev * 10 + r
        num = num//10
    return rev


num = int(input("Enter Number > "))
ans = pallindrome(num)
if(int(ans)==int(num)):
    print("Pallindrome")
else:
    print("Not Pallindrome")