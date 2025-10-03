// Problem: Check if Array is Good
// Link to the problem: https://leetcode.com/problems/check-if-array-is-good/
public class Solution
{
    public bool IsGood(int[] nums)
    {
        if (nums.Length == 1)
        {
            return false;
        }
        int n = nums.Length;
        Array.Sort(nums);
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] != i + 1)
            {
                return false;
            }
        }
        if (nums[n - 1] != n - 1)
        {
            return false;
        }
        return true;
    }
}