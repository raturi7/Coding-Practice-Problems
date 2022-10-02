def fizz_buzz(num):
    if(num%15==0):
        return "FizzBuzz"
    elif(num%3==0):
        return "Fizz"
    elif(num%5==0):
        return "Buzz"
    else:
        return num


num = int(input("Enter Number > "))
ans = fizz_buzz(num)
print(f"Answer = {ans}")