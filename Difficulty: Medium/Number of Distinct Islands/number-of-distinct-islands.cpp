//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
private:
    void bfsTraversal(int row, int col, vector<vector<int>>& visited, vector<vector<int>>& grid, vector<pair<int, int>>& shape) {
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int, int>> q;
        q.push({row, col});
        visited[row][col] = 1; // Mark the starting node as visited
        
        int dirRow[4] = {-1, 1, 0, 0};
        int dirCol[4] = {0, 0, -1, 1};
        
        while (!q.empty()) {
            int currRow = q.front().first;
            int currCol = q.front().second;
            q.pop();
            
            for (int i = 0; i < 4; i++) {
                int nRow = currRow + dirRow[i];
                int nCol = currCol + dirCol[i];
                
                if (nRow >= 0 && nCol >= 0 && nCol < m && nRow < n && 
                    visited[nRow][nCol] != 1 && grid[nRow][nCol] == 1) {
                    visited[nRow][nCol] = 1;
                    q.push({nRow, nCol});
                    shape.push_back({nRow - row, nCol - col}); // Store relative position
                }
            }
        }
    }

public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> visited(n, vector<int>(m, 0));
        set<vector<pair<int, int>>> uniqueIslands;
        
        // Solve this using BFS traversal
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j] && grid[i][j] == 1) {
                    vector<pair<int, int>> shape;
                    shape.push_back({0, 0}); // Anchor the shape at (0, 0)
                    bfsTraversal(i, j, visited, grid, shape);
                    uniqueIslands.insert(shape);
                }
            }
        }
        
        return uniqueIslands.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends