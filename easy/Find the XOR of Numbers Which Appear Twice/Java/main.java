// Problem: Find the XOR of Numbers Which Appear Twice
// Link to the problem: https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/
class Solution {
    public int duplicateNumbersXOR(int[] nums) {
        int ans = 0;
        HashMap<Integer, Integer> m = new HashMap<>();
        List<Integer> a = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            m.put(nums[i], m.getOrDefault(nums[i], 0) + 1);
        }
        for (var i : m.keySet()) {
            if (m.get(i) == 2) {
                a.add(i);
            }
        }
        for (int i = 0; i < a.size(); i++) {
            ans ^= a.get(i);
        }
        return ans;
    }
}