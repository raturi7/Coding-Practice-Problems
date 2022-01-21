def compound(prin,rate,time):
    amount = int(prin)*(pow((1+(float(rate)/100)),int(time)))
    ci = int(amount)-int(prin)
    return ci

prin = input("Enter Principle Amount > ")
rate = input("Enter rate of Interest > ")
time = input("Enter time in months > ")
ans = compound(prin,rate,time)
print(f"Compound Interest = {ans}")