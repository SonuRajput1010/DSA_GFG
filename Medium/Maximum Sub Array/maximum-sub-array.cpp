//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    int sum = 0;
	    int start = 0;
	    int ansStart = -1;
	    int ansEnd = -1;
	    int maxi = INT_MIN;
	    
	    vector<int> ans;
	    
	    for(int i=0; i<n; i++)
	    {
	        if(a[i] < 0){
	            sum = 0;
	            start = i + 1;
	            continue;
	        }
	        sum += a[i];
	        if(sum > maxi )
	        {
	            maxi = sum;
	            ansStart = start;
	            ansEnd = i;
	        }
	        else if(sum == maxi )
	        {
	            if((i-start)>(ansEnd - ansStart)) 
	            {
	                ansStart = start;
	                ansEnd = i;
	            }
	        }
	        
	    }
	    for(int i = ansStart; i<=ansEnd; i++){
	        ans.push_back(a[i]);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends