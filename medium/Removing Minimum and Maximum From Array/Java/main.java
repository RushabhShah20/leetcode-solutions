// Problem: Removing Minimum and Maximum From Array
// Link to the problem: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
class Solution {
    public int minimumDeletions(int[] nums) {
        final int n = nums.length;
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[x]) {
                x = i;
            } else if (nums[i] < nums[y]) {
                y = i;
            }
        }
        final int a = Math.max(x, y) + 1;
        final int b = n - Math.min(x, y);
        final int c = (Math.min(x, y) + 1) + (n - Math.max(x, y));
        final int ans = Math.min(a, Math.min(b, c));
        return ans;
    }
}