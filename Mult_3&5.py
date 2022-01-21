def multiples(limit):
    for i in range(1,int(limit)+1):
        if (i%3==0 or i%5==0):
            print(f"{i} ",end="")


limit = input("Enter Limit> ")
multiples(limit)