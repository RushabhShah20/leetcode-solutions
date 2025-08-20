// Problem: Ant on the Boundary
// Link to the problem: https://leetcode.com/problems/ant-on-the-boundary/
public class Solution
{
    public int ReturnToBoundaryCount(int[] nums)
    {
        int ans = 0, count = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            count += nums[i];
            if (count == 0)
            {
                ans++;
            }
        }
        return ans;
    }
}