// Problem: Count Subarrays With Majority Element II
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-ii/
public class Solution
{
    public long CountMajoritySubarrays(int[] nums, int target)
    {
        int n = nums.Length;
        int[] pre = new int[2 * n + 1];
        pre[n] = 1; int x = n;
        long ans = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                y += pre[x];
                x++;
                pre[x]++;
            }
            else
            {
                x--;
                y -= pre[x];
                pre[x]++;
            }
            ans += y;
        }
        return ans;
    }
}