//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        vector<long long> prev(n,0);
        int mod=1e9+7;
        prev[0]=1;
        
        for(int i=1; i<n; i++){
            vector<long long> curr(n,0);
            for(int j=0; j<=i; j++){
                if(i-1 == -1 || j-1==-1){
                    curr[j]=1;
                }
                else{
                    curr[j]=(prev[j-1]+prev[j])%mod;
                }
            }
            prev = curr;
        }
        
        return prev;
    }
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends