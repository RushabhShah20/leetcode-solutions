// Problem: Chalkboard XOR Game
// Link to the problem: https://leetcode.com/problems/chalkboard-xor-game/
class Solution {
    public boolean xorGame(int[] nums) {
        int total = 0, n = nums.length;
        for (final int num : nums) {
            total ^= num;
        }
        final boolean a = total == 0, b = n % 2 == 0;
        final boolean ans = a || b;
        return ans;
    }
}