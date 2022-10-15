#include<iostream>
using namespace std;
//naive approach O(n*n)
int maximumsumsubarray(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
    int curr=0;
        for(int j=i;j<n;j++){
         curr+=arr[j];
         res=max(curr,res);    
        }
    }
    return res;
}
// efficient approach O(n)

int maxsumsubarray(int arr[],int n){
 int res=arr[0],ans=arr[0];
 for(int i=1;i<n;i++){
    res=max(arr[i],res+arr[i]);
    ans=max(ans,res);   
 }
 return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=maximumsumsubarray(arr,n);
    cout<<res<<endl;
    res=maxsumsubarray(arr,n);
    cout<<res;
    return 0;
}