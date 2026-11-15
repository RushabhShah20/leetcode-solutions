// Problem: Number of Sub-arrays With Odd Sum
// Link to the problem: https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
class Solution {
    public int numOfSubarrays(int[] arr) {
        final int n = arr.length;
        int ans = 0, x = 0, y = 1, z = 0;
        for (int i = 0; i < n; i++) {
            final int m = 1000000007;
            z += arr[i];
            if ((z & 1) > 0) {
                ans = (ans + y) % m;
                x++;
            } else {
                ans = (ans + x) % m;
                y++;
            }
        }
        return ans;
    }
}