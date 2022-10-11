import random
capitalalphabets='ABCDEFGHIJKLMNOPQRSTUVWXYZ'
smallalphabets='abcdefghijklmnopqrstuvwxyz'
symbols='`~!@#$%^&*()_+-=[]/{/}\|;/.//:"<>?"'
size=int(input("Enter Password Size: "))
password=''
while size>0:
    ch=random.randint(1,5)
    if ch==1:password+=random.choice(capitalalphabets)
    elif ch==2:password+=random.choice(smallalphabets)
    elif ch==3:password+=str(random.randint(0,9))
    else:password+=random.choice(symbols)
    size-=1
print(f"Password: {password}")