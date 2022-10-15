#include<iostream>
using namespace std;
void userin(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void printa(int arr[],int size){
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{   int n,m;
    cout<<"size of the array A and B :";
    cin>>n>>m;
    int a[100],b[100];
    cout<<"enter the array a: ";
    userin(a,n);
    cout<<"enter the array b: ";
    userin(b,m);
    int i=0,j=0;
    while(i<n && i<m){
        if(a[i]==b[j]){
        cout<<a[i]<<" ";
        i++;
        j++;
        }
        else if(a[i]<b[j])
        i++;
        else
        j++;

    }
   
    return 0;
}