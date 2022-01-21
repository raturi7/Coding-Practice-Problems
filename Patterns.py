def show_stars(limit):
    for i in range(1,int(limit)+1):
        print("*"*i)


def pattern(limit):
    for i in range(1,int(limit)+1):
        print(f"{i}"*int(limit))


def pattern2(limit):
    for i in range(1,int(limit)+1):
        print(f"{i}"*i)


def pyramid(limit):
    i = 1
    for i in range(1,int(limit)+1):
        print(f"{' '}"*(int(limit)-int(i)),end="")
        print(f"*"*(2*i-1))

limit = input("Enter Size > ")
#show_stars(limit)
pyramid(limit)