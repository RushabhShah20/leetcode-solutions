// Problem: Number of Senior Citizens
// Link to the problem: https://leetcode.com/problems/number-of-senior-citizens/
public class Solution
{
    public int CountSeniors(string[] details)
    {
        int ans = 0;
        for (int i = 0; i < details.Length; i++)
        {
            if (Int32.Parse(details[i].Substring(11, 2)) > 60)
            {
                ans++;
            }
        }
        return ans;
    }
}