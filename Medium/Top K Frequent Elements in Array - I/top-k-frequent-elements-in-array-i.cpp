//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   static bool cmp(pair<int,int>a,pair<int,int>b){
        if(a.second == b.second){
            return a.first > b.first;
        }
        return a.second > b.second;
    }
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int>map;
        
        for(auto x:nums)
        map[x]++;
        
        vector<pair<int,int>>elememt(map.begin(),map.end());
        
        sort(elememt.begin(),elememt.end(),cmp);
        
        vector<int>ans;
        
        for(int i=0;i<k;i++)
        ans.push_back(elememt[i].first);
        
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends