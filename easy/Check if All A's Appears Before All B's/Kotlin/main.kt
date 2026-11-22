// Problem: Check if All A's Appears Before All B's
// Link to the problem: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
class Solution {
    fun checkString(s: String): Boolean {
        var ans: Boolean = true
        var count = 0
        for (i: Int in 0 until s.length) {
            if (s[i] == 'b') {
                ans = true
                count = 1
            }
            if (s[i] == 'a' && count == 1) {
                ans = false
                break
            }
        }
        return ans
    }
}