// Problem: Minimum Number of Increments on Subarrays to Form a Target Array
// Link to the problem: https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/
public class Solution
{
    public int MinNumberOperations(int[] target)
    {
        int n = target.Length, ans = target[0];
        for (int i = 1; i < n; i++)
        {
            if (target[i] > target[i - 1])
            {
                ans += (target[i] - target[i - 1]);
            }
        }
        return ans;
    }
}