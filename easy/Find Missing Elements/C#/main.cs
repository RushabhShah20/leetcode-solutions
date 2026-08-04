// Problem: Find Missing Elements
// Link to the problem: https://leetcode.com/problems/find-missing-elements/
public class Solution
{
    public IList<int> FindMissingElements(int[] nums)
    {
        int n = nums.Length;
        int mn = 101, mx = 1;
        for (int i = 0; i < n; i++)
        {
            mn = Math.Min(mn, nums[i]);
            mx = Math.Max(mx, nums[i]);
        }
        int m = mx - mn + 1;
        int[] a = new int[m];
        for (int i = 0; i < n; i++)
        {
            a[nums[i] - mn]++;
        }
        IList<int> ans = new List<int>();
        for (int i = 0; i < m; i++)
        {
            if (a[i] == 0)
            {
                ans.Add(i + mn);
            }
        }
        return ans;
    }
}