// Problem: Maximum Nesting Depth of Two Valid Parentheses Strings
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
class Solution {
    public int[] maxDepthAfterSplit(String seq) {
        final int n = seq.length();
        int[] ans = new int[n];
        for (int i = 0; i < n; i++) {
            ans[i] = (i & 1) ^ (seq.charAt(i) == '(' ? 1 : 0);
        }
        return ans;
    }
}