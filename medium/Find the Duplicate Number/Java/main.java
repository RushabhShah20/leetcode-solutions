// Problem: Find the Duplicate Number
// Link to the problem:https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
    public int findDuplicate(int[] nums) {
        int ans = 0;
        HashMap<Integer, Integer> m = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (m.containsKey(nums[i])) {
                m.put(nums[i], m.get(nums[i]) + 1);
            } else {
                m.put(nums[i], 1);
            }
            if (m.get(nums[i]) >= 2) {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
}