// Problem: Find Xor-Beauty of Array
// Link to the problem: https://leetcode.com/problems/find-xor-beauty-of-array/
class Solution {
    public int xorBeauty(int[] nums) {
        int ans = 0;
        for (final int num : nums) {
            ans ^= num;
        }
        return ans;
    }
}