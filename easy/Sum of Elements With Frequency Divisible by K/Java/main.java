// Problem: Sum of Elements With Frequency Divisible by K
// Link to the problem: https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/
class Solution {
    public int sumDivisibleByK(int[] nums, int k) {
        Map<Integer, Integer> m = new HashMap<>();
        for (int num : nums) {
            m.put(num, m.getOrDefault(num, 0) + 1);
        }
        int ans = 0;
        for (Map.Entry<Integer, Integer> i : m.entrySet()) {
            if (i.getValue() % k == 0) {
                ans += (i.getKey() * i.getValue());
            }
        }
        return ans;
    }
}