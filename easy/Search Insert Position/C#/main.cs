// Problem: Search Insert Position
// Link to the problem: https://leetcode.com/problems/search-insert-position/
public class Solution
{
    public int SearchInsert(int[] nums, int target)
    {
        int n = nums.Length;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (nums[m] == target)
            {
                return m;
            }
            if (nums[m] < target)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return l;
    }
}