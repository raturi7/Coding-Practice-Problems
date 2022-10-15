#include<iostream>
using namespace std;
void userin(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int main(){
	int n;
	cin>>n;
	int a[100];
	userin(a,n);
	int sum;
	cin>>sum;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
			if(a[i]+a[j]+a[k]==sum){
				cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
			}
	}
    }
	}
	return 0;
}