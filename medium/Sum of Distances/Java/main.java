// Problem: Sum of Distances
// Link to the problem: https://leetcode.com/problems/sum-of-distances/
class Solution {
    public long[] distance(int[] nums) {
        final int n = nums.length;
        Map<Integer, List<Integer>> m = new HashMap<>();
        for (int i = 0; i < n; i++) {
            m.computeIfAbsent(nums[i], k -> new ArrayList<>()).add(i);
        }
        long[] ans = new long[n];
        for (final List<Integer> i : m.values()) {
            long x = 0;
            for (final int j : i) {
                x += j;
            }
            long y = 0;
            final int z = i.size();
            for (int j = 0; j < z; j++) {
                final long k = i.get(j);
                ans[(int) k] = x - y * 2 + k * (2 * j - z);
                y += k;
            }
        }
        return ans;
    }
}