t= input().split("/n") 
m,n,p=input().split()
t=int(t)
row = int(m) 
col = int(n)
p = int(p)
while(t!=0):
    
    mat = []  
   
    for i in range(row):   
        single_row = list(map(int, input().split()))   
        mat.append(single_row)  
    
    sum = 0
    sum=int(sum)
    for i in range(row):
        for j in range(col):
            if (mat[p][j] - mat[i][j])>0:
                sum = sum + (mat[p][j] - mat[i][j])
            
    i=1
    print("Case #{}: {}".format(i, sum))
    i=i+1