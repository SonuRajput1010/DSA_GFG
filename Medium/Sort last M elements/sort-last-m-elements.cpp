//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void sortLastMelements(vector<int>&nums, int n, int m) {
    	// Code here
    	if(m==1) return;
        int j=0;
         vector<int>v;
        for(int i=n+m-1;i>=n;i--){
            v.push_back(nums[i]);
        }
         sort(v.begin(),v.end());
        for(int i=n;i<n+m;i++){
            nums[i]=v[j++];
        }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n+m);
		for(auto &i: nums)
			cin >> i;
		Solution obj;
		obj.sortLastMelements(nums, n, m);
		for(auto i: nums)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends