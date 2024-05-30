//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

const int mod=1e9+7;
class Solution {
  public:
    int solve(int ind1,int ind2,string &s1,string &s2,vector<vector<int>>&dp)
    {
        
        if(ind1==s1.length() && ind2!=s2.length())return 0;
        
        if(ind2==s2.length()) return 1;
        if(dp[ind1][ind2]!=-1)
        {
            return dp[ind1][ind2];
        }
        
        if(s1[ind1]==s2[ind2])
        {
            return dp[ind1][ind2]=(solve(ind1+1,ind2,s1,s2,dp)+solve(ind1+1,ind2+1,s1,s2,dp))%mod;
        }
        return dp[ind1][ind2]=solve(ind1+1,ind2,s1,s2,dp)%mod;
    }
    int countWays(string s1, string s2) {
        // code here
        
        int n=s1.length();
        int m=s2.length();
        
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(0,0,s1,s2,dp)%mod;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        Solution obj;
        int res = obj.countWays(s1, s2);

        cout << res << endl;
    }
}

// } Driver Code Ends