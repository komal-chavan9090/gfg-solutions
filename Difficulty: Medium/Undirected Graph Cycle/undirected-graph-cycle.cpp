//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
      bool bfs(int src, vector<int>adj[],int vis[]){
        vis[src]=1;
        queue<pair<int,int>>q;
        q.push({src,-1});
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto n : adj[node]){
                if(!vis[n]){
                    vis[n]=1;
                    q.push({n,node});
                }
                else if(parent != n){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int v, vector<int> adj[]) {
        int vis[v] = {0};
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(bfs(i,adj,vis)==true){
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends