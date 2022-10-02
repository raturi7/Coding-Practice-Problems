def fibonum(num):
    a = 0
    b = 1
    c = 0
    ctr = 0
    if int(num)==0:
        ctr=1
    elif int(num)==1:
        ctr=1
    else:
        i=0
        while i<=int(num):
            if(c==int(num)):
                ctr=1
                break
            c = a + b
            a=b
            b=c
            i+=1
    if ctr == 1:
        print("It is a Fibonacci Number")
    else:
        print("Not a Fibonnaci Number")


num = input("Enter number of the term of Fibonnaci Series > ")
fibonum(num)