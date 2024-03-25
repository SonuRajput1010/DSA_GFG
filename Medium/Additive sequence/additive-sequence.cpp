//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string add(string a, string b) {
        string res = "";
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        while (i >= 0 || j >= 0 || carry) {
            int tmp = carry;
            if (i >= 0) tmp += a[i--] - '0';
            if (j >= 0) tmp += b[j--] - '0';
            res.push_back('0' + tmp % 10);
            carry = tmp / 10;
        } 
        reverse(res.begin(), res.end());
        return res;
    }
    int func(int idx, int p1, int p2, string &s, int &n){
        if(idx > n) return 0;
        if(idx == n) return 1; 
        int klen =  max(idx-p2, p2-p1);
        if((n - idx + 1) < klen) return 0; 
        string res = add(s.substr(p1, p2-p1), s.substr(p2, idx-p2));
        return (res == s.substr(idx, klen) and func(idx + klen, p2, idx, s, n)) or (res == s.substr(idx, 1 + klen) and func(idx + 1 + klen, p2, idx, s, n));
    }
    bool isAdditiveSequence(string s) { 
        int n = s.size();   
        string a = "";
        for(int i = 0; i < n; i++){
            a += s[i];
            string b = "";
            for(int j = i+1; j < n; j++){
                b += s[j];
                int klen =  max(i+1, j-i);
                if((n - j) < klen) break;
                string res = add(a, b), sk = s.substr(j+1, klen), sk1 = sk + s[j+1+klen];
                if((res == sk and func(j + klen + 1, i+1, j+1, s, n)) or (res == sk1 and func(j + klen + 2, i+1, j+1, s, n)))
                    return 1;
            }
        } 
        return 0;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    Solution sol;

    while (t--) {
        string s;
        cin >> s;

        bool result = sol.isAdditiveSequence(s);
        cout << result << endl;
    }

    return 0;
}

// } Driver Code Ends