// Problem: Find N Unique Integers Sum up to Zero
// Link to the problem: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
public class Solution
{
    public int[] SumZero(int n)
    {
        int[] ans = new int[n];
        for (int i = 0; i < n; i++)
        {
            ans[i] = 2 * i - n + 1;
        }
        return ans;
    }
}