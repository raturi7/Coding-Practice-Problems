def fibon(count):
    a = 0
    b = 1
    c = 0
    ctr = 0
    if int(count)==1:
        print(f"nth term of Fibonaaci series is {a} ",end="")
    elif int(count)==2:
        print(f"nth term of Fibonaaci series is {b} ",end="")
    else:
        ctr = 2
        i = 2
        while i<10:
            if(ctr<int(count)):
                c = a + b
                a=b
                b=c
                ctr+=1
            else:
                print(f"nth term of Fibonaaci series is {c} ",end="")
                break


num = input("Enter number of the term of Fibonnaci Series > ")
fibon(num)


