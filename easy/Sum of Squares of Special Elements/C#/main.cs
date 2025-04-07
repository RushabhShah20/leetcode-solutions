// Problem: Sum of Squares of Special Elements
// Link to the problem: https://leetcode.com/problems/sum-of-squares-of-special-elements/
public class Solution
{
    public int SumOfSquares(int[] nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            if (nums.Length % (i + 1) == 0)
            {
                ans += (nums[i] * nums[i]);
            }
        }
        return ans;
    }
}