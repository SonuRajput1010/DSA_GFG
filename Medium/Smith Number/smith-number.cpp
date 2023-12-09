//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  private:
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2; i<n; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    int primeSum(int n){
        int ans = 0;
        for(int i=2;i<=n;i++){
            if(isPrime(i)){
                while(n%i==0){
                    n/=i;
                    ans+=sumDigit(i);
                }
            }
        }
        return ans;
    }
    int sumDigit(int n){
        int sum = 0;
        while(n != 0){
            sum += n%10;
            n = n/10;
        }
        return sum;
    }
  public:
    int smithNum(int n) {
        // code here
        if(isPrime(n)){
            return 0;
        }
        
        return sumDigit(n) == primeSum(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends