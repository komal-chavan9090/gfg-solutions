//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
           // code here
        priority_queue<int> q;
        map<int,int> m;
        for(int i =0; i<s.size(); i++)
            m[s[i]]++;
        
        for(auto it: m){
            q.push(it.second);
        }
        
        while(k>0){
            int n = q.top(); q.pop();
            q.push(--n);
            k--;
        }
        int ans = 0;
        while(!q.empty()){
            int n = q.top();q.pop();
            ans += pow(n,2);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends