// Problem: Maximum K to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/maximum-k-to-sort-a-permutation/
public class Solution
{
    public int SortPermutation(int[] nums)
    {
        int n = nums.Length, ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != i)
            {
                ans &= nums[i];
            }
        }
        if (ans == -1)
        {
            return 0;
        }
        else
        {
            return ans;
        }
    }
}