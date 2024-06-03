//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    const int mod=1e+9;
  public:
  
   int numberOfConsecutiveOnes(int n) {
        if(n == 2) return 1;
        long long mod = 1e9 + 7;
        vector<long long> dp(n+1, 0);
        dp[2] = 3, dp[3] = 5;
        long long power = 8;
        for(int i=4; i<=n; i++){
            dp[i] = (dp[i-1] + dp[i-2]) % mod;
            power = (power * 2) % mod;
        }
        return (power - dp[n] + mod) % mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0;
}

// } Driver Code Ends