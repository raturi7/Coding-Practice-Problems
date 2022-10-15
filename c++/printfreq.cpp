#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            res++;
            cout<<arr[i]<<' '<<res<<endl;
            res=0;
            continue;
        }
        res++;
    }
  
    return 0;
}