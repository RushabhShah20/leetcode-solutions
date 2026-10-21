// Problem: Minimum Operations to Sort a String
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-string/
class Solution {
    fun minOperations(s: String): Int {
        val n: Int = s.length
        var mn: Char = 'z'
        var mx: Char = 'a'
        var a: Boolean = true;
        for (i: Int in 0 until n) {
            if (mx < s[i]) {
                mx = s[i]
            }
            if (mn > s[i]) {
                mn = s[i]
            }
            if (i > 0 && s[i - 1] > s[i]) {
                a = false
            }
        }
        if (a) {
            return 0
        }
        if (n == 2) {
            return -1
        }
        if (s[0] == mn || s[n - 1] == mx) {
            return 1
        }
        for (i: Int in 1 until n - 1) {
            if (s[i] == mn || s[i] == mx) {
                return 2
            }
        }
        return 3;
    }
}