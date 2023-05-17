//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void rever(int arr[], int n){
	    
	    int i=0;
	    int j=n-1;
	   while(i<=j){
	       swap(arr[i],arr[j]);
	       i++;
	       j--;
	   }
	}
	void leftRotate(int arr[], int d, int n) 
	{ 
	  
	   // Your code goes here
	   int k = d % n;
	   rever(arr,k);
	   rever(arr+k,n-k);
	   rever(arr,n);
	   
	} 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends