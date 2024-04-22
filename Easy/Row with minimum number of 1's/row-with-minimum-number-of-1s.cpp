//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int ans=INT_MAX;
        // int prevcount=m;
        int idx=-1;
        for(int i=0;i<a.size();i++)
        {
            int count=0;
            for(int j=0;j<a[0].size();j++)
            {
                if(a[i][j]==1)
                {
                    count++;
                }
            }
            if(count<ans)
            {
                ans=count;
                idx=i;
            }
            // prevcount=count;
        }
        return idx+1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}
// } Driver Code Ends