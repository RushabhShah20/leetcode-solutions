// Problem: Maximum Nesting Depth of Two Valid Parentheses Strings
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
class Solution {
    fun maxDepthAfterSplit(seq: String): IntArray {
        val n: Int = seq.length
        val ans: IntArray = IntArray(n)
        for (i: Int in 0 until n) {
            ans[i] = (i and 1) xor (if (seq[i] == '(') 1 else 0)
        }
        return ans
    }
}