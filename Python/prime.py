def primes(num):
    ctr = 0
    for i in range(1,int(num)+1):
        if int(num)%int(i)==0:
            ctr+=1
    if(ctr==2):
        return 1
    else:
        return 0
