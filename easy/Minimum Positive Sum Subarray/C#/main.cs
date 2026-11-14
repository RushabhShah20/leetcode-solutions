// Problem: Minimum Positive Sum Subarray
// Link to the problem: https://leetcode.com/problems/minimum-positive-sum-subarray/
public class Solution
{
    public int MinimumSumSubarray(IList<int> nums, int l, int r)
    {
        int n = nums.Count, z = 100001;
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            for (int j = i; j < n; j++)
            {
                x += nums[j];
                int y = j - i + 1;
                if (x > 0 && y >= l && y <= r)
                {
                    z = Math.Min(z, x);
                }
            }
        }
        int ans = z == 100001 ? -1 : z;
        return ans;
    }
}