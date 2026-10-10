// Problem: Minimum Sum of Squared Difference
// Link to the problem: https://leetcode.com/problems/minimum-sum-of-squared-difference/
class Solution {
    fun minSumSquareDiff(nums1: IntArray, nums2: IntArray, k1: Int, k2: Int): Long {
        val n: Int = nums1.size
        var ans: Long = 0L
        var k: Long = k1.toLong() + k2.toLong()
        var x: Int = 0
        var y: Int = 0
        for (i: Int in 0 until n) {
            nums1[i] = Math.abs(nums1[i] - nums2[i])
            x = maxOf(x, nums1[i])
        }
        var l: Int = 0
        var r: Int = x
        while (l <= r) {
            val m: Int = (l + r) shr 1
            var a: Long = 0L
            for (i: Int in 0 until n) {
                if (nums1[i] > m) {
                    a += (nums1[i] - m).toLong()
                }
            }
            val z: Boolean = a <= k
            if (z) {
                y = m
                r = m - 1
            } else {
                l = m + 1
            }
        }
        for (i: Int in 0 until n) {
            if (nums1[i] > y) {
                k -= (nums1[i] - y).toLong()
            }
        }
        nums1.sort()
        for (i: Int in (0 until n).reversed()) {
            var b: Long = minOf(y.toLong(), nums1[i].toLong())
            if (k > 0 && b > 0) {
                k -= 1
                b -= 1
            }
            ans += b * b
        }
        return ans
    }
}