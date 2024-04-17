//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated(int arr[], int n) {
    int x = arr[n + 1], a = 0, b = 0;
    for (int i = 0; i <= n; i++)
        x ^= arr[i] ^ i;
    for (int i = 0; i <= n + 1; i++) {
        if (arr[i] & (x & -x))
            a ^= arr[i];
        else
            b ^= arr[i];
        if (i <= n) {
            if (i & (x & -x))
                a ^= i;
            else
                b ^= i;
        }
    }
    for (int i = n + 1; i >= 0; i--) {
        if (a == arr[i]) {
            return {b, a};
        } else if (b == arr[i]) {
            return {a, b};
        }
    }
    return {};
}

};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends