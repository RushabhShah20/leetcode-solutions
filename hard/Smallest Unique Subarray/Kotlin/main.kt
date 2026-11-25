// Problem: Smallest Unique Subarray
// Link to the problem: https://leetcode.com/problems/smallest-unique-subarray/
class Solution {

    fun check(a: IntArray, k: Int): Boolean {
        val n: Int = a.size
        val m: HashMap<Long, Int> = HashMap<Long, Int>()
        val p1: Int = 31
        val p2: Int = 37
        val m1: Long = 1000000007L
        val m2: Long = 1000000009L
        var e1: Long = 1L
        var e2: Long = 1L
        var h1: Long = 0L
        var h2: Long = 0L
        for (i: Int in 0 until k) {
            h1 = (h1 * p1 % m1 + a[i]) % m1
            h2 = (h2 * p2 % m2 + a[i]) % m2
        }
        for (i: Int in 1 until k) {
            e1 = e1 * p1 % m1
            e2 = e2 * p2 % m2
        }
        var key: Long = h1 * m2 + h2
        m[key] = 1
        for (i: Int in k until n) {
            val x1: Long = a[i - k] * e1 % m1
            h1 = (h1 - x1 + m1) % m1
            h1 = (h1 * p1 % m1 + a[i]) % m1
            val x2: Long = a[i - k] * e2 % m2
            h2 = (h2 - x2 + m2) % m2
            h2 = (h2 * p2 % m2 + a[i]) % m2
            key = h1 * m2 + h2
            m[key] = (m[key] ?: 0) + 1
        }
        for (count: Int in m.values) {
            if (count == 1) {
                return false
            }
        }
        return true
    }

    fun smallestUniqueSubarray(nums: IntArray): Int {
        val n: Int = nums.size
        var ans: Int = n
        var l: Int = 1
        var r: Int = n
        while (l <= r) {
            val m: Int = l + (r - l) / 2
            if (check(nums, m)) {
                l = m + 1
            } else {
                ans = m
                r = m - 1
            }
        }
        return ans
    }
}