//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int n){
        // code here 
        long long sum = 0;
        long long temp = 0;
        
        for(int i=0; i<k; i++){
            temp += Arr[i];
        }
        sum = temp;
        for(int i=k; i<n; i++){
            sum += Arr[i]-Arr[i-k];
            temp = max(temp,sum);
        }
        
        return temp;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends