#include<iostream>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--){
        int n,sum,diff;
        cin>>n;
        int arr[100];
        int asum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            asum=asum+arr[i];
        }
        sum=(n-1)*(n)/2;
        diff=asum-sum;
        cout<<diff<<endl;

    }
    return 0;
}
/* babar solution
int ans=0;
for(int i=0;i<arr.size();i++){
    ans=ans^arr[i];
}
for(int i=1;i<arr.size();i++){
    ans=ans^i;
}
return ans;
*/
