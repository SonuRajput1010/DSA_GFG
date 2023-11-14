//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        int n = s1.length();
        if(s1.length() != s2.length()){
            return false;
        }
        for(int i=0; i<n; i++){
            if(s1 == s2){
                return true;
            }
            
            char a = s1[n-1];
            string s = to_string(a);
            s1.pop_back();
            s1 = a+s1;
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends