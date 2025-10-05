// Problem: Compute Alternating Sum
// Link to the problem: https://leetcode.com/problems/compute-alternating-sum/
public class Solution
{
    public int AlternatingSum(int[] nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            if (i % 2 == 0)
            {
                ans += nums[i];
            }
            else
            {
                ans -= nums[i];
            }
        }
        return ans;
    }
}