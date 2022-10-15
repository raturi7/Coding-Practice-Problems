//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
// Naive Approach 
    int circularsubarray(int n, int a[]){
        int res=a[0];
        for(int i=0;i<n;i++){
            int currsum=a[i];
            int currmax=a[i];
            for(int j=1;j<n;j++){
                int index=(i+j)%n;
                currsum=max(a[i],currsum+a[i]);
                currmax=max(currmax,currsum);
            }
            res=max(res,currmax);
        }
        return res;
    }
// Efficient approach
    int optimizedcirculararray(int n, int a[]){

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        int ans = ob.circularsubarray(n, a);
        int ans2=ob.optimizedcirculararray(n,a);
        cout<<ans<<endl;
        cout<<ans2;
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends