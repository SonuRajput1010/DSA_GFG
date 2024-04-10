//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        // Initialize the previous bit to 0.
        int prev = 0; // Initialize the previous bit to 0.
        for (int i = 31; i >= 0; i--) {
            // XOR operation with shifted 1 and previous bit.
            // Left shift 1 by i positions to create a mask.
            // Multiply by prev to apply the previous bit.
            n ^= (1 << i) * prev;
            
            // Checking if the ith bit is set in n.
            if (n & (1 << i))
                prev = 1; // If set, update the previous bit to 1.
            else
                prev = 0; // If not set, update the previous bit to 0.
        }
        return n;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends