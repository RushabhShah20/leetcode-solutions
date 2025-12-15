// Problem: Find the Value of the Partition
// Link to the problem: https://leetcode.com/problems/find-the-value-of-the-partition/
public class Solution
{
    public int FindValueOfPartition(int[] nums)
    {
        Array.Sort(nums);
        int ans = 1000000000, n = nums.Length;
        for (int i = 0; i < n - 1; i++)
        {
            ans = Math.Min(ans, nums[i + 1] - nums[i]);
        }
        return ans;
    }
}