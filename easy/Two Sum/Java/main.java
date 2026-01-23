// Problem: Two Sum
// Link to the problem: https://leetcode.com/problems/two-sum/
class Solution {
    public int[] twoSum(int[] nums, int target) {
        final int n = nums.length;
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            int dif = target - nums[i];
            if (map.containsKey(dif)) {
                return new int[] { map.get(dif), i };
            } else {
                map.put(nums[i], i);
            }
        }
        return new int[] {};
    }
}