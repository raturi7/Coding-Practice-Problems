def speed(speed):
    if(int(speed) < 70):
        print("OK")
    else:
        ans = ((int(speed)-70)//5)
        print(f"Points: {ans}")
        if (ans>12):
            print("License Suspended")


speeed = int(input("Speed > "))
speed(speeed)