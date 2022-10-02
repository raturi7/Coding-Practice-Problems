def reverse(num):
    rev = 0
    while(int(num)>0):
        r = int(num) % 10
        rev = rev*10+r
        num = int(num)//10
    return rev


