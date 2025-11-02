// Problem: Find Missing Elements
// Link to the problem: https://leetcode.com/problems/find-missing-elements/
public class Solution
{
    public IList<int> FindMissingElements(int[] nums)
    {
        SortedSet<int> s = new SortedSet<int>();
        foreach (int num in nums)
        {
            s.Add(num);
        }
        IList<int> ans = new List<int>();
        for (int i = s.First(); i <= s.Last(); i++)
        {
            if (!s.Contains(i))
            {
                ans.Add(i);
            }
        }
        return ans;
    }
}