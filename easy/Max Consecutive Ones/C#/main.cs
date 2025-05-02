// Problem: Max Consecutive Ones
// Link to the problem: https://leetcode.com/problems/max-consecutive-ones/
public class Solution
{
    public int FindMaxConsecutiveOnes(int[] nums)
    {
        int ans = 0, count = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] == 1)
            {
                count++;
                ans = Math.Max(ans, count);
            }
            else
            {
                count = 0;
            }
        }
        return ans;
    }
}