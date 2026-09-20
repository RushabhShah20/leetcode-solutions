// Problem: Reverse Degree of a String
// Link to the problem: https://leetcode.com/problems/reverse-degree-of-a-string/
class Solution {
    fun reverseDegree(s: String): Int {
        val n: Int = s.length
        var ans: Int = 0;
        for (i: Int in 0 until n) {
            ans += (26 - (s[i] - 'a')) * (i + 1)
        }
        return ans
    }
}