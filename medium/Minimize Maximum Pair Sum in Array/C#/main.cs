// Problem: Minimize Maximum Pair Sum in Array
// Link to the problem: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
public class Solution
{
    public int MinPairSum(int[] nums)
    {
        int n = nums.Length;
        Array.Sort(nums);
        int l = 0, r = n - 1, ans = 0;
        while (l < r)
        {
            ans = Math.Max(ans, nums[l] + nums[r]);
            l++;
            r--;
        }
        return ans;
    }
}