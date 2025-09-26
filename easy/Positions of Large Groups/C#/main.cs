// Problem: Positions of Large Groups
// Link to the problem: https://leetcode.com/problems/positions-of-large-groups/
public class Solution
{
    public IList<IList<int>> LargeGroupPositions(string s)
    {
        List<IList<int>> ans = new List<IList<int>>();
        int count = 1;
        for (int i = 1; i < s.Count(); i++)
        {
            if (s[i] == s[i - 1])
            {
                count++;
            }
            else
            {
                if (count >= 3)
                {
                    ans.Add([i - count, i - 1]);
                }
                count = 1;
            }
        }
        if (count >= 3)
        {
            ans.Add([(int)(s.Count() - count), (int)(s.Count() - 1)]);
        }
        return ans;
    }
}