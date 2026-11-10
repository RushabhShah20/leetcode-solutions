// Problem: Climbing Stairs II
// Link to the problem: https://leetcode.com/problems/climbing-stairs-ii/
class Solution {
    fun climbStairs(n: Int, costs: IntArray): Int {
        var a: Int = 0
        var b: Int = 0
        var c: Int = 0
        for (i: Int in 0 until n) {
            val d: Int = minOf(a + 9, minOf(b + 4, c + 1)) + costs[i]
            a = b
            b = c
            c = d
        }
        val ans: Int = c
        return ans
    }
}