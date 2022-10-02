def sum(num):
    ans = 0
    while(int(num)>0):
        r = num%10
        ans = ans + r
        num = num // 10
    return ans


num = int(input("Enter Number > "))
ans = sum(num)
print(f"Sum of digits of {num} is {ans}")