// Problem: Range Sum of Sorted Subarray Sums
// Link to the problem: https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/
public class Solution
{
    public int RangeSum(int[] nums, int n, int left, int right)
    {
        int ans = 0, mod = 1000000007;
        List<int> prefixSum = new List<int>();
        for (int i = 0; i < nums.Length; i++)
        {
            int sum = nums[i];
            prefixSum.Add(sum);
            for (int j = i + 1; j < nums.Length; j++)
            {
                sum = ((sum + nums[j]) % mod);
                prefixSum.Add(sum);
            }
        }
        prefixSum.Sort();
        for (int i = left - 1; i < right; i++)
        {
            ans = ((ans + prefixSum[i]) % mod);
        }
        return ans;
    }
}