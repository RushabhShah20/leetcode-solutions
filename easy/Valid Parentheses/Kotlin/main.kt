// Problem: Valid Parentheses
// Link to the problem: https://leetcode.com/problems/valid-parentheses/
class Solution {
    fun isValid(s: String): Boolean {
        val n: Int = s.length
        val st = ArrayList<Char>()
        for (i: Int in 0 until n) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.add(s[i])
            } else {
                if (st.isEmpty()) {
                    return false
                }
                val x: Char = st[st.size - 1]
                val y: Char = s[i]
                if ((x == '(' && y == ')') || (x == '{' && y == '}') || (x == '[' && y == ']')) {
                    st.removeAt(st.size - 1)
                } else {
                    return false
                }
            }
        }
        val ans: Boolean = st.isEmpty()
        return ans
    }
}