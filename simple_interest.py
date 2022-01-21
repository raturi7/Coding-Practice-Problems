def simple(prin,rate,time):
    return ((int(prin)*int(rate)*int(time)/100))


principle = int(input("Enter Principle Amount > "))
rate = int(input("Enter Rate of Interest > "))
time = int(input("Enter number of months > "))

si = simple(principle,rate,time)
print(f"Simple Interest = {si}")