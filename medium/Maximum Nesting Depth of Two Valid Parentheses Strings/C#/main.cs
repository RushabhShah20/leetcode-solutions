// Problem: Maximum Nesting Depth of Two Valid Parentheses Strings
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
public class Solution
{
    public int[] MaxDepthAfterSplit(string seq)
    {
        int n = seq.Length;
        int[] ans = new int[n];
        for (int i = 0; i < n; i++)
        {
            ans[i] = (i & 1) ^ (seq[i] == '(' ? 1 : 0);
        }
        return ans;
    }
}