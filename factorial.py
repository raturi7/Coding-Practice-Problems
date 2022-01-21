def factorial(num):
    fact = 1
    while(int(num)>0):
        fact = fact * int(num)
        (num) = int(num) -1
    return fact


#num = input("Enter Number > ")
#fact = factorial(num)
#print(f"Factorial of {num} is {fact}")