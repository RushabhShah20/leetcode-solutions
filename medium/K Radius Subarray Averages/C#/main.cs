// Problem: K Radius Subarray Averages
// Link to the problem: https://leetcode.com/problems/k-radius-subarray-averages/
public class Solution
{
    public int[] GetAverages(int[] nums, int k)
    {
        int n = nums.Length, m = (2 * k) + 1;
        int[] ans = new int[n];
        Array.Fill(ans, -1);
        long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i >= m)
            {
                sum += nums[i];
                sum -= nums[i - m];
            }
            else
            {
                sum += nums[i];
            }
            if (i >= m - 1)
            {
                ans[i - k] = (int)(sum / (long)(m));
            }
        }
        return ans;
    }
}