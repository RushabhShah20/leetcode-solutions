// Problem: Single Number II
// Link to the problem: https://leetcode.com/problems/single-number-ii/
class Solution {
    public int singleNumber(int[] nums) {
        int ans = 0;
        HashMap<Integer, Integer> m = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            m.put(nums[i], m.getOrDefault(nums[i], 0) + 1);
        }
        for (int i : m.keySet()) {
            if (m.get(i) == 1) {
                ans = i;
                break;
            }
        }
        return ans;
    }
}