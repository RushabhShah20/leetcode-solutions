// Problem: Maximum Product of Two Elements in an Array
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
class Solution {
    public int maxProduct(int[] nums) {
        int x = 0, y = 0;
        for (final int num : nums) {
            if (num > x) {
                y = x;
                x = num;
            } else if (num > y) {
                y = num;
            }
        }
        final int ans = (x - 1) * (y - 1);
        return ans;
    }
}