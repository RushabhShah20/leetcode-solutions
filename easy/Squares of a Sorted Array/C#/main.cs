// Problem: Squares of a Sorted Array
// Link to the problem: https://leetcode.com/problems/squares-of-a-sorted-array/
public class Solution
{
    public int[] SortedSquares(int[] nums)
    {
        int n = nums.Length, l = 0, r = n - 1, i = n - 1;
        int[] ans = new int[n];
        while (l <= r)
        {
            int x = nums[l] * nums[l], y = nums[r] * nums[r];
            if (x > y)
            {
                ans[i] = x;
                l++;
            }
            else
            {
                ans[i] = y;
                r--;
            }
            i--;
        }
        return ans;
    }
}