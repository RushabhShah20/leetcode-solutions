// Problem: Maximum Element After Decreasing and Rearranging
// Link to the problem: https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
class Solution {
    public int maximumElementAfterDecrementingAndRearranging(int[] arr) {
        Arrays.sort(arr);
        final int n = arr.length;
        int ans = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] >= ans + 1) {
                ans++;
            }
        }
        return ans;
    }
}