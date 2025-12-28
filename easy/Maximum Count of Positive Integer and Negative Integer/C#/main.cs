// Problem: Maximum Count of Positive Integer and Negative Integer
// Link to the problem: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
public class Solution
{
    public int MaximumCount(int[] nums)
    {
        int n = nums.Length, start = 0, end = n - 1, maxNeg = -1, minPos = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] > 0)
            {
                minPos = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        start = 0;
        end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] < 0)
            {
                maxNeg = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        maxNeg += 1;
        minPos = n - minPos;
        int ans = Math.Max(maxNeg, minPos);
        return ans;
    }
}