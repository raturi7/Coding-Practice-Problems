#include<iostream>
using namespace std;

int main()
{   int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[100];
    cout<<"enter the element in the array : ";
    for(int i=0;i<n;i++)
    {   if(i+1<n)
        cin>>arr[i];
    }
    for(int i=0;i<n;i+=2){
        swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}