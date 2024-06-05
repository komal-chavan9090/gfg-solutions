//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
   int findSwapValues(int a[], int n, int b[], int m) {
    std::unordered_map<int, int> mp;
    int sum1 = 0, sum2 = 0;

    // Array 'a' ka hisaab kitaab
    for (int i = 0; i < n; i++) {
        sum1 += a[i];
    }
    
    // Array 'b' ka hisaab kitaab aur map bhar do
    for (int i = 0; i < m; i++) {
        sum2 += b[i];
        mp[b[i]] = i;
    }

    int total = sum1 + sum2;

    // Agar total sum odd hai, to seedha 'no' bol do
    if (total % 2 == 1) {
        return -1;
    }

    // Swap karne ke liye jo antar chahiye
    int diff = (total / 2) - sum1;

    // Dekho bhai, array 'a' ka har element check karo aur map me dhundo
    for (int i = 0; i < n; i++) {
        int x = a[i];
        int dev = x + diff;

        // Agar map me mil gaya to bingo! Return 1
        if (mp.find(dev) != mp.end()) {
            return 1;
        }
    }

    // Koi swap wali jodi nahi mili, toh return -1
    return -1;
}
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends