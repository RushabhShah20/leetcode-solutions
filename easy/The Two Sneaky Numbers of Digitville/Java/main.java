// Problem: The Two Sneaky Numbers of Digitville
// Link to the problem: https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/
class Solution {
    public int[] getSneakyNumbers(int[] nums) {
        Map<Integer, Integer> m = new HashMap<>();
        for (int num : nums) {
            m.put(num, m.getOrDefault(num, 0) + 1);
        }
        Set<Integer> ans_set = new HashSet<>();
        for (int num : nums) {
            if (m.get(num) == 2) {
                ans_set.add(num);
            }
        }
        int i = 0;
        int[] ans = new int[2];
        for (Integer num : ans_set) {
            ans[i++] = num;
        }
        return ans;
    }
}