// Problem: Generate Parentheses
// Link to the problem: https://leetcode.com/problems/generate-parentheses/
public class Solution
{
    public IList<string> GenerateParenthesis(int n)
    {
        if (n == 0)
        {
            return new List<string> { "" };
        }
        List<string> ans = new List<string>();
        for (int i = 0; i < n; i++)
        {
            IList<String> l = GenerateParenthesis(i), r = GenerateParenthesis(n - 1 - i);
            for (int j = 0; j < l.Count; j++)
            {
                for (int k = 0; k < r.Count; k++)
                {
                    ans.Add("(" + l[j] + ")" + r[k]);
                }
            }
        }
        return ans;
    }
}