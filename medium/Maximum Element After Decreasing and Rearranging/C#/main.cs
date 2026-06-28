// Problem: Maximum Element After Decreasing and Rearranging
// Link to the problem: https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
public class Solution
{
    public int MaximumElementAfterDecrementingAndRearranging(int[] arr)
    {
        Array.Sort(arr);
        int n = arr.Length;
        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] >= ans + 1)
            {
                ans++;
            }
        }
        return ans;
    }
}
