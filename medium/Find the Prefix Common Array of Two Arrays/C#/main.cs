// Problem: Find the Prefix Common Array of Two Arrays
// Link to the problem: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/
public class Solution
{
    public int[] FindThePrefixCommonArray(int[] A, int[] B)
    {
        int n = A.Length;
        int[] m = new int[n + 1], ans = new int[n];
        for (int i = 0; i <= n; i++)
        {
            m[i] = 0;
        }
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            m[A[i]]++;
            if (m[A[i]] == 2)
            {
                x++;
            }
            m[B[i]]++;
            if (m[B[i]] == 2)
            {
                x++;
            }
            ans[i] = x;
        }
        return ans;
    }
}