//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        
        
        for(int i=0;i<r;i++)
        {
            string s1="";
            for(int j=0;j<=n;j++)
            {
                if(s[j]=='1')
                {
                    s1+="10";
                }
                else
                {
                    s1+="01";
                }
            }
            s=s1;
        }
        return s[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends