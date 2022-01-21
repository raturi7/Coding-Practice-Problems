from armstrong import armstrong
from coprime import coprime 
from factorial import factorial


num = input("Enter Number > ")
arms = armstrong(num)
if(num == arms):
    print(f"{num} is an Armstrong Number")
else:
    print(f"Not an Armstrong Number")

coprime(num)

fact = factorial(num)
print(f"{fact} is the factorial of {num}")
