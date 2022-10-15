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
			if(a[i]+a[j]==sum){
				cout<<min(a[i],a[j])<<" "<<max(a[j],a[i])<<endl;
				
			}
	}
	}
	return 0;
}
/*leetcode approach
vector <vector<int>> ans;
for(int i=0;i<arr.size();i++){
	for(int j=i+1;j<arr.size();j++)
	if(arr[i]+arr[j]==sum){
		vector<int> temp;
		temp.push_back(min(arr[i],arr[j]));
		temp.push_back(max(arr[i],arr[j]));
		ans.push_back(temp);
	}
}
sort(ans.begin(),ans.end());
return ans;
*/