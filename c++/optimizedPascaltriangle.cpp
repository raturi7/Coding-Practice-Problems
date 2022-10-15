#include<bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> arr(n);
    for(int i=0;i<n;i++){
        arr[i].resize(i+1);
        arr[i][0]=arr[i][i]=1;
       for(int j=1;j<i;j++){
           arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
       }
    }
    return arr;
}

int main(){
    int n;
    cin>>n;
    vector<vector<long long int>> ans;
    ans=printPascal(n);
    for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
    }
}