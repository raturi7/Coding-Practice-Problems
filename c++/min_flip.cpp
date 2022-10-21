#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count1=0,countminus1=0,total=0;
      cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]==1)
	        {
	            count1++;
	        }
	        else
	        countminus1++;
	    }
      if(n%2!=0)
	    {
	        cout<<-1<<endl;
          continue;
	    }
	    if(count1==countminus1){
	    cout<<0<<endl;
      	continue;
      }
      if(count1 == n || countminus1 == n)
      {
        cout<<n/2<<endl;
        continue;
      }
      if(count1>countminus1 || countminus1>count1){
		total= abs(count1-countminus1);
		cout<<total/2<<endl;
	  }
	}
	return 0;
}
