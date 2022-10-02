print(""" 

                                                            TURTLE GAME
                                        
                        In this Game you have to enter some commands to move the turtle to a new position. 
                                                        Press Enter to Start.""")
a=input()
print("Press")
print("F : To move the Turtle by 1 Unit in the direction its facing")
print("L : To turn the Turtle towards left by 90 degrees")
n = input("Enter Number of Commands > ")
command = input("Enter your Command > ")
if len(command)<=int(n):
    print(command)
    x = 0
    y = 0
    dir = 0
    for i in command.upper():
        if(i=="L"):
            dir+=1
            continue
        if(dir%4==0):
            x=x+1
        elif(dir%4==1):
            y=y+1
        elif(dir%4==2):
            x=x-1
        else:
            y=y-1
    print(f"Coordinates: {x},{y}")

        
else:
    print("Please keep the command within the limit")
