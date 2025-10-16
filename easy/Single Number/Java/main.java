// Problem: Single Number
// Link to the problem: https://leetcode.com/problems/single-number/
class Solution {
    public int singleNumber(int[] nums) {
        Set<Integer> ans = new HashSet<>();
        int sum = 0, uniSum = 0;
        for (int i = 0; i < nums.length; i++) {
            if (!ans.contains(nums[i])) {
                ans.add(nums[i]);
                uniSum += nums[i];
            }
            sum += nums[i];
        }
        return 2 * uniSum - sum;
    }
}