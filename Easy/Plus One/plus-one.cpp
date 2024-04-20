//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        int carry = 1; // Start with carry as 1
        for (int i = N - 1; i >= 0; i--) {
            int sum = arr[i] + carry;
            arr[i] = sum % 10; // Update the current digit
            carry = sum / 10;   // Update the carry
        }
        // If carry is still remaining after the loop, insert it at the beginning
        if (carry > 0) {
            arr.insert(arr.begin(), carry);
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends