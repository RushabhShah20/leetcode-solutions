// Problem: Find Minimum in Rotated Sorted Array II
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
public class Solution
{
    public int FindMin(int[] nums)
    {
        int n = nums.Length, l = 0, r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (nums[m] > nums[r])
            {
                l = m + 1;
            }
            else if (nums[m] < nums[l])
            {
                r = m;
                l++;
            }
            else
            {
                r--;
            }
        }
        int ans = nums[l];
        return ans;
    }
}