// Problem: Find the Distance Value Between Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/
class Solution {
    public int findTheDistanceValue(int[] arr1, int[] arr2, int d) {
        final int n = arr1.length, m = arr2.length;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            boolean x = true;
            for (int j = 0; j < m; j++) {
                if (arr1[i] == arr2[j] || Math.abs(arr1[i] - arr2[j]) <= d) {
                    x = false;
                    break;
                }
            }
            if (x == true) {
                ans++;
            }
        }
        return ans;
    }
}