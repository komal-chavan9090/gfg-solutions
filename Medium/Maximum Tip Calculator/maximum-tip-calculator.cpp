//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            pair<int,int>p1;
            p1=make_pair(abs(arr[i]-brr[i]),i);
            vec.push_back(p1);
        }
        sort(vec.rbegin(), vec.rend());
        
        long long ans=0;
        for(auto it:vec){
            int i=it.second;
            if((x>0 && arr[i]>=brr[i])||(y==0 && x>0 && brr[i]>=arr[i])){
                x--;
                ans+=arr[i];
            }
            else if((y>0 && brr[i]>arr[i])||(x==0 && y>0 && arr[i]>=brr[i])){
                y--;
                ans+=brr[i];
            }
            
        }
        
        return ans;
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends