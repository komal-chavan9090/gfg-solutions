//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    vector<int> arr(26,0);
	    
	    for(int i=0;i<s.size();i++)
	    {
	        arr[s[i]-'a']++;
	    }
	    
	    int k=0;
	    int diff=1;
	    
	    for(int i=0;i<26;i++)
	    {
	        if(arr[i]!=0)
	        {
	            k=arr[i];
	            break;
	        }
	    }
	    
	    for(int i=0;i<26;i++)
	    {
	        if(arr[i]!=0 && arr[i]!=k)
	        {
	            if(abs(arr[i]-k)>diff) return false;
	            else
	            {
	                diff-=(abs(arr[i]-k));
	            }
	        }
	    }
	    return true;
	   
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends