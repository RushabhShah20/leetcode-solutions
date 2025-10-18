// Problem: Maximum Number of Distinct Elements After Operations
// Link to the problem: https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations/
class Solution {
    public int maxDistinctElements(int[] nums, int k) {
        int ans = 0, x = Integer.MIN_VALUE;
        Arrays.sort(nums);
        for (int num : nums) {
            int l = num - k, r = num + k;
            if (x < l) {
                x = l;
                ans++;
            } else if (x < r) {
                x++;
                ans++;
            }
        }
        return ans;
    }
}