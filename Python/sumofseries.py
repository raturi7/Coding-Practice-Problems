def sum(limit):
    sum = 0
    i = 1
    for i in range(1,int(limit)+1):
        sum += 1/i
    return sum


limit = input("Enter Limit > ")
ans = sum(limit)
print(f"Sum of Series upto {limit} terms is {ans}")
