def palstring(string):
    for i in range(0,int(len(string)/2)):
        if string[i]!=string[len(string)-i-1]:
            return False
    return True



string = input("Enter String > ")
if palstring(string):
    print("Pallindrome String")
else:
    print("Not a Pallindrome String")