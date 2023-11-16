//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void findPermu(int index, string &s, set<string> &ans) {
            if(index == s.size()) {
                ans.insert(s);
                return;
            }
            for(int i=index; i<s.size(); i++) {
                swap(s[i], s[index]);
                findPermu(index+1,s,ans);
                swap(s[i],s[index]);
            }
        }
		vector<string>find_permutation(string S)
		{
		    // Code here there
    		set<string> ans;
            sort(S.begin(),S.end());
            findPermu(0,S,ans);
            vector<string> res(ans.begin(),ans.end());
            return res;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends