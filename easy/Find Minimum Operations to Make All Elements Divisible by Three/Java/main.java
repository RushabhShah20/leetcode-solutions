// Problem: Find Minimum Operations to Make All Elements Divisible by Three
// Link to the problem: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
class Solution {
    public int minimumOperations(int[] nums) {
        int ans = 0;
        for (final int num : nums) {
            ans += ((num % 3 != 0) ? (1) : (0));
        }
        return ans;
    }
}