// Problem: Check if Array Is Sorted and Rotated
// Link to the problem: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
public class Solution
{
    public bool Check(int[] nums)
    {
        int n = nums.Length, x = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
            {
                x++;
            }
            if (x > 1)
            {
                return false;
            }
        }
        return true;
    }
}