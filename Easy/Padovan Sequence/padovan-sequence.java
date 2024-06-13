//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    int n = sc.nextInt();
                    Solution ob = new Solution();
                    System.out.println(ob.padovanSequence(n));
                }
        }
}    
// } Driver Code Ends


//User function Template for Java
class Solution
{
  int mod = 1000000007;
  public int padovanSequence(int n)
    {
        //code here.
        if(n<=2){
            return 1;
        }
        int prev0 = 1;
        int prev1 = 1;
        int prev2 = 1;
        int val = 0;
        for(int i=3;i<=n;i++){
           val = (prev0 + prev1)%mod;
           prev0 = prev1;
           prev1 = prev2;
           prev2 = val;
        }
        return val%mod;
    }
    
}
