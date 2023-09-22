//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i=0;
            int j=0;
            int k=0;
            
            vector<int>v;
            while( i<n1 && j<n2 && k<n3){
                if(A[i] == B[j] && B[j] == C[k] ){
                    if(v.size()==0 || (v.size()>0 && v.back()!=A[i]))
                        v.push_back(A[i]);
                        i++;
                        j++;
                        k++;
                }
                 else if(A[i] <=B[j] && A[i]<=C[k])
                       i++;
                       
               else if(B[j] <=A[i] && B[j]<=C[k])
                     j++;
               
               else if(C[k] <=B[j] && C[k]<=A[i])
                     k++;
                }
            return v;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends