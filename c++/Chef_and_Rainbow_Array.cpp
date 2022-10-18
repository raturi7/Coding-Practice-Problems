// Chef likes all arrays equally. But he likes some arrays more equally than others. In particular, he loves Rainbow Arrays.

// An array is Rainbow if it has the following structure:

// First a1 elements equal 1.
// Next a2 elements equal 2.
// Next a3 elements equal 3.
// Next a4 elements equal 4.
// Next a5 elements equal 5.
// Next a6 elements equal 6.
// Next a7 elements equal 7.
// Next a6 elements equal 6.
// Next a5 elements equal 5.
// Next a4 elements equal 4.
// Next a3 elements equal 3.
// Next a2 elements equal 2.
// Next a1 elements equal 1.
// ai can be any non-zero positive integer.
// There are no other elements in array.

// Help Chef in finding out if the given array is a Rainbow Array or not.

// Input
// The first line of the input contains an integer T denoting the number of test cases.
// The first line of each test case contains an integer N, denoting the number of elements in the given array.
// The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of array.

// Output
// For each test case, output a line containing "yes" or "no" (without quotes) corresponding to the case if the array is rainbow array or not.

// Constraints
// 1 ≤ T ≤ 100
// 7 ≤ N ≤ 100
// 1 ≤ Ai ≤ 10

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
bool palindrome(int arr[],int n){
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i] || arr[i]>7 )
        return 0;
    }
    return 1;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
      	int t;
     	cin>>t;
    	while(t--){
	        int n;
	        cin>>n;
	      int arr[n];
	      for(int i=0;i<n;i++){
	          cin>>arr[i];
	      }
	    
	    if(palindrome(arr,n)){
	        int ct=1;
	        for(int i=0;i<=n/2;i++){
	            if(arr[i]==ct) ct++;
	             }
	             
	             if(ct==8) cout<<"yes"<<endl;
	             else cout<<"no"<<endl;
	             
	    }
	    else {
	        cout<<"no"<<endl;
	    }
    	}
	return 0;
}
