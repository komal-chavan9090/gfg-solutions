//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	bool isPrime(int n) {
    // Handle edge cases
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    if (n <= 3) return true;  // 2 and 3 are prime numbers

    // Check for multiples of 2 or 3
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Check for other factors up to the square root of n
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    if(N==2)
	    {
	        return {2};
	    }
	    vector<int> ans;
	    for(int i=1;i<=N;i++)
	    {
	        if(N%i==0)
	        {
	            if(isPrime(i))
	            {
	                ans.push_back(i);
	            }
	            
	        }
	    }
	    return ans;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends