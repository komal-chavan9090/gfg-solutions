//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void recursion(vector<int> &ans, int i, int n, unordered_map<int, int> &mp){
        
        int ele = ans.back() - i;
        
        if (ele > 0 and mp.find(ele) == mp.end())
            ans.push_back(ele), mp[ele] = 1;
        else
            ele = ans.back() + i, ans.push_back(ele), mp[ele] = 1;
            
        if (i == n)
            return;
        
        recursion(ans, i + 1, n, mp);
    }
    
    vector<int> recamanSequence(int n){
        
        vector<int> ans = {0};
        unordered_map<int, int> mp = {{0, 1}};
        
        recursion(ans, 1, n, mp);
        
        return ans;
    }
       
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends