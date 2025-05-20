// Problem: Majority Element II
// Link to the problem: https://leetcode.com/problems/majority-element-ii/
class Solution {
    public List<Integer> majorityElement(int[] nums) {
        HashMap<Integer, Integer> m = new HashMap<>();
        List<Integer> ans = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            m.put(nums[i], m.getOrDefault(nums[i], 0) + 1);
        }
        for (var i : m.keySet()) {
            if (m.get(i) * 3 > nums.length) {
                ans.add(i);
            }
        }
        return ans;
    }
}