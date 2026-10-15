// Problem: Subarrays Distinct Element Sum of Squares I
// Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
class Solution {
    public int sumCounts(List<Integer> nums) {
        final int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            Set<Integer> s = new HashSet<>();
            for (int j = i; j < n; j++) {
                s.add(nums.get(j));
                ans += s.size() * s.size();
            }
        }
        return ans;
    }
}