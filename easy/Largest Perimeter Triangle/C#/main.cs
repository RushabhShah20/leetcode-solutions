// Problem: Largest Perimeter Triangle
// Link to the problem: https://leetcode.com/problems/largest-perimeter-triangle/
public class Solution
{
    public int LargestPerimeter(int[] nums)
    {
        Array.Sort(nums);
        for (int i = nums.Length - 1; i > 1; --i)
        {
            if (nums[i] < nums[i - 1] + nums[i - 2])
            {
                return nums[i] + nums[i - 1] + nums[i - 2];
            }
        }
        return 0;
    }
}