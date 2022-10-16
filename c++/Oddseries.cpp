// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C+
const int mod=1e9+7;

class Solution {
  public:
    int fibonacci(int n){
        int a = 0, b = 1, c, i;
        
    if( n == 0)
        return 0;
    for(i = 2; i <= n; i++)
    {
       if(i%5==0){
       c =11%mod;
       }
       else{
        c=(a+b)%mod;
       }
       a=b;
       b=c;
    }
    return b%mod;
    }
    int findNth(int N) {
        return fibonacci(N);
    }
};

// { Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {
        int N;
        cin >> N;
        cout << sol.findNth(N) << "\n";
    }
    return 0;
}
  // } Driver Code Ends