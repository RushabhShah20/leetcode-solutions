// Problem: Subarrays Distinct Element Sum of Squares I
// Link to the problem: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
public class Solution
{
    public int SumCounts(IList<int> nums)
    {
        int n = nums.Count, ans = 0;
        for (int i = 0; i < n; i++)
        {
            HashSet<int> s = new HashSet<int>();
            for (int j = i; j < n; j++)
            {
                s.Add(nums[j]);
                ans += s.Count * s.Count;
            }
        }
        return ans;
    }
}