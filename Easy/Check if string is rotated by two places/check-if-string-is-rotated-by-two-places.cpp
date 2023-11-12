//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n = str1.size();
        string s1="",s2="";
        
        for(int i=2;i<n;i++){
            s1.push_back(str1[i]);
        }
        
        for(int i=0; i<2;i++){
            s2.push_back(str1[i]);
        }
        
        string res = s1+s2;
        
        
        string s3="",s4="";
        
        for(int i=n-2; i<=n-1;i++){
            s3.push_back(str1[i]);
        }
        for(int i=0;i<n-2;i++){
            s4.push_back(str1[i]);
        }
        string res1 = s3+s4;
        
        if(res == str2 || res1 == str2){
            return true;
        }
        else{
            return 0;
        }
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends