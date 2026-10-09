// Problem: Minimum Insertions to Balance a Parentheses String
// Link to the problem: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/
class Solution {
    fun minInsertions(s: String): Int {
        val n: Int = s.length
        var ans: Int = 0
        var x: Int = 0
        for (i: Int in 0 until n) {
            if (s[i] == '(') {
                if ((x and 1) == 1) {
                    ans++
                    x++
                } else {
                    x += 2
                }
            } else if (x == 0) {
                ans++
                x = 1
            } else {
                x--
            }
        }
        ans += x
        return ans
    }
}