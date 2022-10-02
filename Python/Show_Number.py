def show_num(limit):
    for i in range(int(limit)+1):
        if(i%2==0):
            print(f"{i} Even")
        else:
            print(f"{i} Odd")


limit = input("Enter Limit> ")
show_num(limit)