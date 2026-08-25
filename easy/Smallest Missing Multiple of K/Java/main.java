// Problem: Smallest Missing Multiple of K
// Link to the problem: https://leetcode.com/problems/smallest-missing-multiple-of-k/
class Solution {
    public int missingMultiple(int[] nums, int k) {
        final int n = nums.length;
        Set<Integer> s = new HashSet<>();
        for (int i = 0; i < n; i++) {
            s.add(nums[i]);
        }
        int ans = k;
        while (s.contains(ans)) {
            ans += k;
        }
        return ans;
    }
}