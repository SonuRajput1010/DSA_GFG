//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> pattern(int N){
        // code here
        if(N == 0) return {0};
        if(N < 0) return {N}; 
        vector<int>ans;
        int temp =  N-5;
        int flag = 0;
        ans.push_back(N);
        
        while(temp != N){
            if(flag){
                ans.push_back(temp);
                temp += 5;
            }
            else{
                if(temp <=0){
                    flag = 1;
                }
                else{
                    ans.push_back(temp);
                    temp -= 5;
                }
            }
        }
        ans.push_back(temp);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends