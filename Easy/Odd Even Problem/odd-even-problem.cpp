//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
        
        map<char,int> mpp;
        int x=0;
        int y=0;
        
        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]]++;
        }
        
        for(auto it:mpp)
        {
            if(it.second%2==0)
            {
                if(int(it.first)%2==0)
                {
                    y++;
                }
            }
            else
            {
                if(int(it.first)%2!=0)
                {
                    x++;   
                }
            }
        }
        
        if((x+y)%2==0)
        {
            return "EVEN";
        }
        else
        {
            return "ODD";
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends