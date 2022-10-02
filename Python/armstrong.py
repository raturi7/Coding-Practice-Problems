def armstrong(num):
    number = int(num)
    arm = 0
    while(number>0):
        r = number%10
        arm += r*r*r
        number = number // 10
    return arm


#num = input("Enter Number > ")
#ans = armstrong(num)
#if(int(num)==int(ans)):
#    print("Armstrong Number")
#else:
#    print("Not Armstrong Number")