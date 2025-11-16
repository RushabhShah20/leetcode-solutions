// Problem: Maximize Expression of Three Elements
// Link to the problem: https://leetcode.com/problems/maximize-expression-of-three-elements/
public class Solution
{
    public int MaximizeExpressionOfThree(int[] nums)
    {
        int n = nums.Length;
        Array.Sort(nums);
        return nums[n - 1] + nums[n - 2] - nums[0];
    }
}