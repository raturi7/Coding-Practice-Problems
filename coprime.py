from reverse import reverse
from prime import primes

def coprime(num):
    rev = reverse(int(num))
    if(primes(num)==1 & primes(rev)==1):
        print(f"{num} & its reverse are Coprime")
    else:
        print(f"{num} & its reverse are not Coprimes")


#num = input("Enter Number > ")
#coprime(num)