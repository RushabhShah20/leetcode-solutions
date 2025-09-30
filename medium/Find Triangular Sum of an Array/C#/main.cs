// Problem: Find Triangular Sum of an Array
// Link to the problem: https://leetcode.com/problems/find-triangular-sum-of-an-array/
public class Solution
{
    public int TriangularSum(int[] nums)
    {
        int n = nums.Length;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                nums[j] = ((nums[j] + nums[j + 1]) % 10);
            }
        }
        return nums[0];
    }
}