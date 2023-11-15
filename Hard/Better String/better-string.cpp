//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:int distinctSubsequences(string str){
      int count = 1;
      int arr[26] = {0};
      for(int i=0; i<str.length(); i++){
          if(arr[str[i]-'a'] == 0){
              arr[str[i]-'a'] = count;
              count = count*2;
          }
          else{
              int temp = arr[str[i]-'a'];
              arr[str[i]-'a'] = count;
              count = count*2;
              count = count-temp;
          }
      }
      return count;
  }
  
    string betterString(string str1, string str2) {
        // code here
        
        int c1 = distinctSubsequences(str1);
        int c2 = distinctSubsequences(str2);
        
        return c1>=c2 ? str1 : str2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends