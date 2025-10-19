// Problem: Minimum Subsequence in Non-Increasing Order
// Link to the problem: https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
public class Solution
{
    public IList<int> MinSubsequence(int[] nums)
    {
        Array.Sort(nums);
        Array.Reverse(nums);
        int sum = 0;
        foreach (int num in nums)
        {
            sum += num;
        }
        int a = 0;
        IList<int> ans = new List<int>();
        foreach (int num in nums)
        {
            a += num;
            if (a > sum - a)
            {
                ans.Add(num);
                break;
            }
            else
            {
                ans.Add(num);
            }
        }
        return ans;
    }
}