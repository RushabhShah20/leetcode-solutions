// Problem: Minimum Number of Changes to Make Binary String Beautiful
// Link to the problem: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/
class Solution {
    fun minChanges(s: String): Int {
        val n: Int = s.length
        var ans: Int = 0
        for (i: Int in 1..n step 2) {
            if (s[i] != s[i - 1]) {
                ans++
            }
        }
        return ans
    }
}