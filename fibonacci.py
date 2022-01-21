def fibo(num):
    a = 0
    b = 1
    c = 0
    if int(num)==1:
        print (f"{a}")
    elif int(num)==2:
        print(f"{a} {b}")
    else:
        print(f"{a} {b} ",end ="")
        for i in range(2,int(num)+1):
            c = a + b
            print(f"{int(c)} ",end="")
            a=b
            b=c


limit = input("Enter Limit > ")
fibo(limit)
        

