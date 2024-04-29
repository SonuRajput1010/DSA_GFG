//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<string> pattern(int n){
        // code here
        vector<string> result;
        string pat = "";
        int k = 1, l = n*(n+1);
        for(int i=n; i>0; i--) {
            pat = string(2*(n-i), '-');
            for(int j=0; j<i; j++, k++)
                pat += to_string(k) + "*";
            string rev = "";
            for(int j=0; j<i; j++) {
                rev = to_string(l) + rev;
                l--;
                if(j < i-1)
                    rev = "*" + rev;
            }
            result.push_back(pat+rev);
        }
        return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<string> ans = ob.pattern(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<"\n";
    }
    return 0;
}
// } Driver Code Ends