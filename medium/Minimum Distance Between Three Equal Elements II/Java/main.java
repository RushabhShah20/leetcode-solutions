// Problem: Minimum Distance Between Three Equal Elements II
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-ii/
class Solution {
    public int minimumDistance(int[] nums) {
        Map<Integer, List<Integer>> x = new TreeMap<>();
        final int n = nums.length;
        for (int i = 0; i < n; i++) {
            x.computeIfAbsent(nums[i], k -> new ArrayList<>()).add(i);
        }
        int ans = Integer.MAX_VALUE;
        for (final Map.Entry<Integer, List<Integer>> i : x.entrySet()) {
            List<Integer> y = i.getValue();
            if (y.size() < 3) {
                continue;
            }
            Collections.sort(y);
            for (int j = 0; j + 2 < y.size(); j++) {
                ans = Math.min(ans, 2 * (y.get(j + 2) - y.get(j)));
            }
        }
        return ans == Integer.MAX_VALUE ? -1 : ans;
    }
}