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
    int ctr=0,res=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            ctr++;
        }
        else {
            res=max(ctr,res);
            ctr=0;
        }
    }
    cout<<res;
    return 0;
}