//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
// Naive Approach 
    int evenoddlength(int n, int a[]){
        int res,ans=1;
        for(int i=0;i<n;i++){
            res=1;
            for(int j=i+1;j<n;j++){
                if((a[j]%2==0 && a[j-1]%2!=0) ||(a[j]%2!=0 && a[j-1]%2==0))
                    res++;
                else 
                break;
            }
            ans=max(res,ans);
        }
        return ans;
    }
// Efficient approach
    int lengthEvenOdd(int n, int a[]){
        int res=1,len=1;
        for(int i=1;i<n;i++){
            if((a[i]%2==0 && a[i-1]%2!=0) ||(a[i]%2!=0 && a[i-1]%2==0))
                {
                    res++;
                    len=max(res,len);
                }
                else 
                res=1;            
        }
        return len;
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
        int ans = ob.evenoddlength(n, a);
        int ans2=ob.lengthEvenOdd(n,a);
        cout<<ans<<endl;
        cout<<ans2;
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends