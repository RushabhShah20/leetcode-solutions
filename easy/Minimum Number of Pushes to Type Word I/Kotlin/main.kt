// Problem: Minimum Number of Pushes to Type Word I
// Link to the problem: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/
class Solution {
    fun minimumPushes(word: String): Int {
        var ans: Int = 0
        val n: Int = word.length
        for (i in 0 until n) {
            ans += when {
                i < 8 -> 1
                i in 8..15 -> 2
                i in 16..23 -> 3
                else -> 4
            }
        }
        return ans
    }
}