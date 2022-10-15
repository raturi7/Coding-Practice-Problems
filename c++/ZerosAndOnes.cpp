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
{   int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[100];
    cout<<"enter the arrays with zero and ones "<<endl;
    userin(arr,n);
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if((arr[i]==0 && arr[j]==1)|| (arr[i]==1 && arr[j]==1)){
            j--;
        }
        else if(arr[i]==0 && arr[j]==0){
            i++;
        }
    
    }
    printa(arr,n);
    return 0;
}