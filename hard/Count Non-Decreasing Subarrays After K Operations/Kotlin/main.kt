// Problem: Count Non-Decreasing Subarrays After K Operations
// Link to the problem: https://leetcode.com/problems/count-non-decreasing-subarrays-after-k-operations/
class Solution {
    fun countNonDecreasingSubarrays(nums: IntArray, k: Int): Long {
        val n: Int = nums.size
        var ans: Long = 0L
        var x: Long = 0L
        val st: IntArray = IntArray(n)
        var a: Int = 0
        var b: Int = 0
        var j: Int = n - 1
        for (i: Int in n - 1 downTo 0) {
            while (a < b && nums[st[b - 1]] < nums[i]) {
                b -= 1
                val y: Int = st[b]
                val r: Int = if (a < b) st[b - 1] else j + 1
                x += (r - y).toLong() * (nums[i] - nums[y]).toLong()
            }
            st[b] = i
            b += 1
            while (x > k.toLong()) {
                x -= (nums[st[a]] - nums[j]).toLong()
                if (st[a] == j) {
                    a += 1
                }
                j -= 1
            }
            ans += (j - i + 1).toLong()
        }
        return ans
    }
}