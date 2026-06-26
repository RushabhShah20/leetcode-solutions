// Problem: Count Subarrays With Majority Element II
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-ii/
class Solution {
    public long countMajoritySubarrays(int[] nums, int target) {
        final int n = nums.length;
        int[] pre = new int[2 * n + 1];
        pre[n] = 1;
        int x = n;
        long ans = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                y += pre[x];
                x++;
                pre[x]++;
            } else {
                x--;
                y -= pre[x];
                pre[x]++;
            }
            ans += y;
        }
        return ans;
    }
}