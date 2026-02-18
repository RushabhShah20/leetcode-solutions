// Problem: Binary Number with Alternating Bits
// Link to the problem: https://leetcode.com/problems/binary-number-with-alternating-bits/
public class Solution
{
    public List<int> toBinary(int n)
    {
        List<int> ans = new List<int>();
        while (n > 0)
        {
            ans.Add(n % 2);
            n /= 2;
        }
        ans.Reverse();
        return ans;
    }
    public bool isAlternating(List<int> ans)
    {
        for (int i = 0; i < ans.Count; i++)
        {
            if (i % 2 == 0)
            {
                if (ans[i] == 0)
                {
                    return false;
                }
            }
            else
            {
                if (ans[i] == 1)
                {
                    return false;
                }
            }
        }
        return true;
    }
    public bool HasAlternatingBits(int n)
    {
        List<int> ans = toBinary(n);
        return isAlternating(ans);
    }
}