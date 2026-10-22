// Problem: Minimum Operations to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/
class Solution {
    fun minOperations(nums: IntArray): Int {
        val n: Int = nums.size
        if (n == 1) {
            return 0;
        }
        var j: Int = 0;
        while (nums[j] != 0) {
            j++;
        }
        var x: Boolean = true;
        var y: Boolean = true;
        for (i: Int in 1 until n) {
            val z: Int = nums[(i + j) % n];
            if (z != i) {
                x = false;
            }
            if (z != n - i) {
                y = false;
            }
            if (!x && !y) {
                return -1;
            }
        }
        if (x) {
            return minOf(j, n - j + 2);
        }
        return minOf(n - j, j + 2);
    }
}