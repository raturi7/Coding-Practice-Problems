1.	#include <iostream>  
2.	using namespace std;  
3.	int main()  
4.	{  
5.	 char ch='A';    
6.	    int i, j, k, m;    
7.	    for(i=1;i<=5;i++)    
8.	    {    
9.	        for(j=5;j>=i;j--)    
10.	            cout<<" ";    
11.	        for(k=1;k<=i;k++)    
12.	            cout<<ch++;    
13.	            ch--;    
14.	        for(m=1;m<i;m++)    
15.	            cout<<--ch;    
16.	        cout<<"\n";    
17.	        ch='A';    
18.	    }    
19.	return 0;  
20.	}  
