// Problem: Generate Parentheses
// Link to the problem: https://leetcode.com/problems/generate-parentheses/
class Solution {
    fun generateParenthesis(n: Int): List<String> {
        if (n == 0) {
            return listOf("")
        }
        val ans = mutableListOf<String>()
        for (i: Int in 0 until n) {
            val l: List<String> = generateParenthesis(i)
            val r: List<String> = generateParenthesis(n - 1 - i)
            for (j: Int in 0 until l.size) {
                for (k: Int in 0 until r.size) {
                    ans.add("(" + l[j] + ")" + r[k])
                }
            }
        }
        return ans
    }
}