// Problem: Maximize Consecutive Elements in an Array After Modification
// Link to the problem: https://leetcode.com/problems/maximize-consecutive-elements-in-an-array-after-modification/
class Solution {
    fun maxSelectedElements(nums: IntArray): Int {
        val n: Int = nums.size
        nums.sort()
        val a: IntArray = IntArray(1000001)
        var ans: Int = 0
        for (i: Int in 0 until n) {
            val x: Int = nums[i];
            a[x + 1] = maxOf(a[x + 1], a[x] + 1)
            a[x] = maxOf(a[x], a[x - 1] + 1)
            ans = maxOf(ans, maxOf(a[x], a[x + 1]))
        }
        return ans
    }
}