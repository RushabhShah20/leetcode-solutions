// Problem: Single Element in a Sorted Array
// Link to the problem: https://leetcode.com/problems/single-element-in-a-sorted-array/
class Solution {
    public int singleNonDuplicate(int[] nums) {
        int ans = 0;
        HashMap<Integer, Integer> m = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            m.put(nums[i], m.getOrDefault(nums[i], 0) + 1);
        }
        for (var i : m.keySet()) {
            if (m.get(i) == 1) {
                ans = i;
                break;
            }
        }
        return ans;
    }
}