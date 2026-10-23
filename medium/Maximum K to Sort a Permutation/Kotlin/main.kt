// Problem: Maximum K to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/maximum-k-to-sort-a-permutation/
class Solution {
    fun sortPermutation(nums: IntArray): Int {
        val n: Int = nums.size;
        var ans: Int = -1;
        for (i: Int in 0 until n) {
            if (nums[i] != i) {
                ans = ans and nums[i]
            }
        }
        if (ans == -1) {
            return 0;
        } else {
            return ans;
        }
    }
}