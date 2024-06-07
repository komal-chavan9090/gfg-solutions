//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    unordered_map<char,int> mpp;
	    int cnt=0;
	    for(int i=0;i<pat.length();i++)
	    {
	        mpp[pat[i]]++;
	    }
	    int sz=mpp.size();
	    
	    
	    int i=0,j=0,k=pat.length();
	    
	    while(j<txt.size())
	    {
	        if(mpp.find(txt[j])!=mpp.end())
	        {
	            mpp[txt[j]]--;
	            
	            if(mpp[txt[j]]==0)
	            {
	                sz--;
	            }
	        }
	        
	        if(j-i+1 == k)
	        {
	            if(sz==0)
	            {
	                cnt++;
	            }
	            if(mpp.find(txt[i])!=mpp.end())
	            {
	                mpp[txt[i]]++;
	                if(mpp[txt[i]]==1)
	                {
	                    sz++;
	                }
	                
	            }
	            i++;
	        }
	        j++;
	    }
	    return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends