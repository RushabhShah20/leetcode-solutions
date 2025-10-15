// Problem: Adjacent Increasing Subarrays Detection II
// Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-ii/
public class Solution
{
    public int MaxIncreasingSubarrays(IList<int> nums)
    {
        int n = nums.Count;
        int prevK = 1;
        int k = 1;
        int res = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i + 1] > nums[i])
                k++;
            else
            {
                prevK = k;
                k = 1;
            }
            res = Math.Max(res, Math.Min(prevK, k));
            res = Math.Max(res, k / 2);
        }
        return res;
    }
}