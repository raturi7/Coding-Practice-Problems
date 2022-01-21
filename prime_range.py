from prime import primes

lowerlimit = int(input("Enter the lower limit > "))
upperlimit = int(input("Enter the upper limit > "))
print(f"Primes between {lowerlimit} & {upperlimit}: ",end="")
for i in range(lowerlimit,upperlimit+1):
    if primes(i):
        print(f"{i} ",end="")
