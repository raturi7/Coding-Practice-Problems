def areacircle(r):
    return 3.14*pow(int(r),2)

radius = input("Enter radius of circle > ")
area = areacircle(radius)
print(f"Area of Circle = {area}")