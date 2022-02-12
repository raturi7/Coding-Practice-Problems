def print_rangoli(size):

    # top
    x=1
    for i in range(size,1,-1):              # Printing -- in the top left quater
        print("--"*int(i-1),end="")
        n=size
        for k in range(x):                  # Printing alphabets in top left quater 
            print(chr(96+n)+"-",end="")
            n-=1
        if i<size:
            z=n+1
            for k in range(x-1):            # Printing alphabets in top right quater 
                print(chr(96+z+1)+"-",end="")
                z+=1
        x+=1
        print("-"*int((i*2)-3))             # Printing -- in top right quater 
        
    # middle
    n=size
    for i in range(size,1,-1):
        print(chr(96+n)+"-",end="")
        n-=1
    print("a",end="")
    n+=1
    for i in range(size-1):
        print("-"+chr(96+n),end="")
        n+=1
    print("")

    #bottom
    
    x=n-2
    z=1
    for i in range(1,size):
        print("--"*int(i),end="")
        n=size
        for k in range(x):
            print(chr(96+n)+"-",end="")
            n-=1

        n+=1
        for k in range(x-1):
            print(chr(96+n+1)+"-",end="")
            n+=1
        x-=1

        print("-"*z,end="")
        z+=2
        print()
      


n = int(input())
print_rangoli(n)