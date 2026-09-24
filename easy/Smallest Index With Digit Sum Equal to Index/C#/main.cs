// Problem: Smallest Index With Digit Sum Equal to Index
// Link to the problem: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/
public class Solution
{
    public int sum(int n)
    {
        int ans = 0;
        while (n > 0)
        {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
    public int SmallestIndex(int[] nums)
    {
        int n = nums.Length;
        for (int i = 0; i < n; i++)
        {
            if (sum(nums[i]) == i)
            {
                return i;
            }
        }
        return -1;
    }
}