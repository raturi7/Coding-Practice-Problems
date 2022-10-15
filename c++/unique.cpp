// find the unique element in the array
#include<iostream>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--){
         int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // optimized solution we can use xor operation
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
    // brute force
    /*for(int i=0;i<n;i++){
        int ctr=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                ctr++;
            }
        }
        if(ctr==1){
            cout<<arr[i]<<endl;
            break;
        }
    }*/
    }
    
    return 0;
}