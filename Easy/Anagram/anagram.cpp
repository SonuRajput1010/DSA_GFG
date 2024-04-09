//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int count[26]={0};
        
        int i=0;
        int len1=0;
        while(a[i] != '\0'){
            count[a[i]-'a']++;
            len1++;
            i++;
        }
        
        int j=0;
        int len2=0;
        while(b[j] != '\0'){
            count[b[j]-'a']--;
            len2++;
            j++;
        }
        if(len1!=len2){
        return 0;
        }
        else{
            int k=0;
            while(k<26){
                if(count[k] != 0){
                    return 0;
                }
                k++;
            }
        }
        return 1;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends