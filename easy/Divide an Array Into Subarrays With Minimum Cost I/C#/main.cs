// Problem: Divide an Array Into Subarrays With Minimum Cost I
// Link to the problem: https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/
public class Solution
{
    public int MinimumCost(int[] nums)
    {
        int n = nums.Length, m1 = 51, m2 = 51;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] < m1)
            {
                m2 = m1;
                m1 = nums[i];
            }
            else if (nums[i] < m2)
            {
                m2 = nums[i];
            }
        }
        int ans = nums[0] + m1 + m2;
        return ans;
    }
}