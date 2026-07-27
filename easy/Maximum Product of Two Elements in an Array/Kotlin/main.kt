// Problem: Maximum Product of Two Elements in an Array
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
class Solution {
    fun maxProduct(nums: IntArray): Int {
        val n: Int = nums.size;
        var x: Int = 0;
        var y: Int = 0;
        for (i in 0 until n) {
            if (nums[i] > x) {
                y = x;
                x = nums[i];
            } else if (nums[i] > y) {
                y = nums[i];
            }
        }
        val ans: Int = (x - 1) * (y - 1);
        return ans;
    }
}