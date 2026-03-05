// Problem: Minimum Changes To Make Alternating Binary String
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/
public class Solution
{
    public int MinOperations(string s)
    {
        int n = s.Length, ansEven = 0, ansOdd = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == '0')
                {
                    ansEven++;
                }
                else
                {
                    ansOdd++;
                }
            }
            else
            {
                if (s[i] == '1')
                {
                    ansEven++;
                }
                else
                {
                    ansOdd++;
                }
            }
        }
        int ans = Math.Min(ansEven, ansOdd);
        return ans;
    }
}