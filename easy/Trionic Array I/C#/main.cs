// Problem: Trionic Array I
// Link to the problem: https://leetcode.com/problems/trionic-array-i/
public class Solution
{
    public bool IsTrionic(int[] nums)
    {
        int n = nums.Length;
        int i = 0, p = 0, q = 0;
        while (i < n - 1 && nums[i + 1] > nums[i])
        {
            i++;
        }
        p = i;
        while (i < n - 1 && nums[i + 1] < nums[i])
        {
            i++;
        }
        q = i;
        while (i < n - 1 && nums[i + 1] > nums[i])
        {
            i++;
        }
        if (i == n - 1)
        {
            if (p != 0 && q != 0 && p != n - 1 && q != n - 1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
}