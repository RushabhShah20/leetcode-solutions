// Problem: Minimum Operations to Exceed Threshold Value I
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/
public class Solution
{
    public int MinOperations(int[] nums, int k)
    {
        int ans = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] < k)
            {
                ans++;
            }
        }
        return ans;
    }
}