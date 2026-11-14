// Problem: Minimum Positive Sum Subarray
// Link to the problem: https://leetcode.com/problems/minimum-positive-sum-subarray/
class Solution {
    public int minimumSumSubarray(List<Integer> nums, int l, int r) {
        final int n = nums.size();
        int z = 100001;
        for (int i = 0; i < n; i++) {
            int x = 0;
            for (int j = i; j < n; j++) {
                x += nums.get(j);
                final int y = j - i + 1;
                if (x > 0 && y >= l && y <= r) {
                    z = Math.min(z, x);
                }
            }
        }
        final int ans = z == 100001 ? -1 : z;
        return ans;
    }
}