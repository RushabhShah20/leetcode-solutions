// Problem: Monotonic Array
// Link to the problem: https://leetcode.com/problems/monotonic-array/
public class Solution
{
    public bool IsMonotonic(int[] nums)
    {
        int len = nums.Length;
        if (nums[len - 1] >= nums[0])
        {
            for (int i = 1; i < len; i++)
            {
                if (nums[i] < nums[i - 1])
                    return false;
            }
        }
        else
        {
            for (int i = 0; i < len - 1; i++)
            {
                if (nums[i] < nums[i + 1])
                    return false;
            }
        }
        return true;
    }
}