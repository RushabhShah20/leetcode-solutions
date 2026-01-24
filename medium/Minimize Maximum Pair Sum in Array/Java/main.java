// Problem: Minimize Maximum Pair Sum in Array
// Link to the problem: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
class Solution {
    public int minPairSum(int[] nums) {
        final int n = nums.length;
        Arrays.sort(nums);
        int l = 0, r = n - 1, ans = 0;
        while (l < r) {
            ans = Math.max(ans, nums[l] + nums[r]);
            l++;
            r--;
        }
        return ans;
    }
}