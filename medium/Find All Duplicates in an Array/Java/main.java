// Problem: Find All Duplicates in an Array
// Link to the problem: https://leetcode.com/problems/find-all-duplicates-in-an-array/
class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        List<Integer> ans = new ArrayList<>();
        HashMap<Integer, Integer> m = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            m.put(nums[i], m.getOrDefault(nums[i], 0) + 1);
        }
        for (var i : m.keySet()) {
            if (m.get(i) == 2) {
                ans.add(i);
            }
        }
        return ans;
    }
}