//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        // Complete the function
       unordered_map<int,int>mp;
        int sum = 0, ans = 0,i=0;
        mp[0] = -1;
        while(i<n)
        {
            sum+=arr[i];
            if(mp.find(sum-k) != mp.end())
            {
                ans = max(ans,i-mp[sum-k]);
            }
            if(mp.find(sum)==mp.end())
                mp[sum] =i;
            i++;
        }
        return ans;
    
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends