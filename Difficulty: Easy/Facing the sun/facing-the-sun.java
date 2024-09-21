//{ Driver Code Starts
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine(); // consume the remaining newline
        while (t-- > 0) {
            String input = sc.nextLine();
            String[] inputStrings = input.split(" ");
            int[] height = new int[inputStrings.length];
            for (int i = 0; i < inputStrings.length; i++) {
                height[i] = Integer.parseInt(inputStrings[i]);
            }
            Solution ob = new Solution();
            int ans = ob.countBuildings(height);
            System.out.println(ans);
        }
        sc.close();
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    // Returns count buildings that can see sunlight
    int count=1; //first building will always see the sunrise
    int max=0;
    public int countBuildings(int[] a) {
        // code here
        for(int i=1;i<a.length;i++){
            max=Math.max(max,a[i-1]); //finding the max height of all of its left buildings
            if(a[i]>max){ // checking if  current building is heighten than its left of its buildings
                count+=1;
            }
        }
        return count;
    }
}
