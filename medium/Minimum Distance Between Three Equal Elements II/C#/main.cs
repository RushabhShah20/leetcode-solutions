// Problem: Minimum Distance Between Three Equal Elements II
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-ii/
public class Solution
{
    public int MinimumDistance(int[] nums)
    {
        SortedDictionary<int, List<int>> x = new SortedDictionary<int, List<int>>();
        int n = nums.Length;
        for (int i = 0; i < n; i++)
        {
            if (!x.ContainsKey(nums[i]))
            {
                x[nums[i]] = new List<int>();
            }
            x[nums[i]].Add(i);
        }
        int ans = int.MaxValue;
        foreach (KeyValuePair<int, List<int>> i in x)
        {
            List<int> y = i.Value;
            if (y.Count < 3)
            {
                continue;
            }
            y.Sort();
            for (int j = 0; j + 2 < y.Count; j++)
            {
                int diff = 2 * (y[j + 2] - y[j]);
                ans = Math.Min(ans, diff);
            }
        }
        return ans == int.MaxValue ? -1 : ans;
    }
}