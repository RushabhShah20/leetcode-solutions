// Problem: Two Sum
// Link to the problem: https://leetcode.com/problems/two-sum/
class Solution {
    public int[] twoSum(int[] nums, int target) {
        if (nums == null || nums.length < 2) {
            return new int[] { 0, 0 };
        }
        HashMap<Integer, Integer> ans = new HashMap<Integer, Integer>();
        for (int i = 0; i < nums.length; i++) {
            if (ans.containsKey(nums[i])) {
                return new int[] { ans.get(nums[i]), i };
            } else {
                ans.put(target - nums[i], i);
            }
        }
        return new int[] { 0, 0 };
    }
}