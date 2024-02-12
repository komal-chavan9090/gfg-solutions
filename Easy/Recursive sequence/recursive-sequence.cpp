//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        
        return res(n+1,1,1);
    }
    
    long long res(int m,int n,long curv)
    {
        if(n==m)
        {
            return 0;
        }
        long temp=1;
        
        for(int i=0;i<n;i++)
        {
            temp=(temp*curv)%1000000007;
            curv++;
        }
        return (temp+res(m,n+1,curv))%1000000007;
    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends