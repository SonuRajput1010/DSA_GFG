//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int k) {
        if(k == S.size()){
            return "0";
        }
        string ans ="";
        for(int i=0; i<S.size(); i++){
            while(ans.size()>0&& k>0 && ans.back()>S[i]){
                ans.pop_back();
                k--;
            }
            ans+=S[i];
        }
        while(k>0 && ans.size()>0){
            ans.pop_back();
            k--;
        }
        int i=0;
        
        while(ans[i]=='0' && i<ans.size()){
            i++;
        }
        if(i == ans.size()){
            return "0";
        }
        return ans.substr(i);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends