// Problem: Check If It Is a Good Array
// Link to the problem: https://leetcode.com/problems/check-if-it-is-a-good-array/
class Solution {
    public static int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public boolean isGoodArray(int[] nums) {
        int ans = nums[0];
        for (int i = 0; i < nums.length; i++) {
            ans = gcd(ans, nums[i]);
            if (ans == 1) {
                break;
            }
        }
        if (ans == 1) {
            return true;
        } else {
            return false;
        }
    }
}