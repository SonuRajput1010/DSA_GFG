//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
private:
    void dfs(int node, int vis[], vector<int>adj[]){
        vis[node] = 1;
        
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj);
            }
        }
    }
public:
	int isEulerCircuit(int V, vector<int>adj[]){
	    // Code here
	    int vis[V] = {0};
	    dfs(0,vis,adj);
	    for(int i=0; i<V; i++){
	        if(!vis[i] && adj[i].size() != 0){
	            return 0;
	        }
	    }
	    int ed = 0;
        int od = 0;
        
        for(int i=0; i<V; i++) {
            if(adj[i].size()%2==0) {
                ed++;
            } else {
                od++;
            }
        }
        
        if (od == 2) {
            return 1;
        }
        
        if (od==0) {
            return 2;
        }
        
        return 0;
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.isEulerCircuit(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends