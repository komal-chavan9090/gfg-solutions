//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */
class Solution
{
public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        int n = mat.size(), m = mat[0].size(), i = 0, j = 0;
        vector<int> res;
        bool isUp = 1;
    
        for(int k = 0; k < m * n; ) 
        {
            if(isUp)
            {
                for(;i >= 0 and j < m; i--, j++) 
                {
                    res.push_back(mat[i][j]);
                    k++;
                }
                
                if(i < 0 and j < m)
                    i = 0;
                    
                if(j == m) 
                {
                    i += 2;
                    j--;
                }
            }
            else 
            {
                for(;j >= 0 and i < n; i++, j--) 
                {
                    res.push_back(mat[i][j]);
                    k++;
                }
                
                if(j < 0 and i < n)
                    j = 0;
                    
                if(i == n) 
                {
                    j += 2;
                    i--;
                }
            }
            
            isUp = !isUp;
        }
        
        return res;
    }
};



//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends