// Problem: Minimum Moves to Equal Array Elements II
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
public class Solution
{
    public int MinMoves2(int[] nums)
    {
        int n = nums.Length, ans = 0, l = 0, r = n - 1;
        Array.Sort(nums);
        while (l <= r)
        {
            ans += nums[r] - nums[l];
            l++;
            r--;
        }
        return ans;
    }
}