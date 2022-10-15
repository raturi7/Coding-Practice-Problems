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
        if(arr[i]!=0){
            arr[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}