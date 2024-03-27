//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int solve(int x, int y, vector<vector<int>> &mat, int n, int m, vector<vector<int>> &vis) 
    {
        if(y == m - 1)
        {
            if(mat[x][y] == 1)
                return 0;
                
            return 1e9;
        }
        
        int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
        int mini = 1e9;
        
        for(int i = 0; i < 4; i++) 
        {
            int nx = x + dx[i], ny = y + dy[i];
            if(nx >= 0 and ny >= 0 and nx < n and ny < m and !vis[nx][ny] and mat[nx][ny] == 1)
            {
                vis[nx][ny] = 1;
                mini = min(mini, 1 + solve(nx, ny, mat, n, m, vis));
                vis[nx][ny] = 0;
            }
        }
        
        return mini;
    }

    int findShortestPath(vector<vector<int>> &mat)
    {
        int n = mat.size(), m = mat[0].size(), mini = 1e9;
        vector<vector<int>> vis(n, vector<int> (m));
        
        for(int i = 0; i < n; i++) 
        {
            for(int j = 0; j < m; j++) 
            {
                if(mat[i][j] == 0) 
                {
                    if(i - 1 >= 0)
                        mat[i - 1][j] = -1;
                    
                    if(i + 1 < n)
                        mat[i + 1][j] = -1;
                        
                    if(j - 1 >= 0)
                        mat[i][j - 1] = -1;
                        
                    if(j + 1 < m)
                        mat[i][j + 1] = -1;
                }
            }
        }
        
        for(int i = 0; i < n; i++) 
            if(mat[i][0] == 1)
                mini = min(mini, solve(i, 0, mat, n, m, vis));
            
        return mini == 1e9 ? -1 : mini + 1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R, C;
        cin >> R >> C;
        vector<vector<int>> mat(R, vector<int>(C));
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> mat[i][j];
            }
        }

        Solution ob;
        int ans = ob.findShortestPath(mat);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends