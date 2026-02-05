// Problem: Transformed Array
// Link to the problem: https://leetcode.com/problems/transformed-array/
public class Solution
{
    public int[] ConstructTransformedArray(int[] nums)
    {
        int n = nums.Length;
        int[] ans = new int[n];
        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[(i + nums[i] % n + n) % n];
        }
        return ans;
    }
}