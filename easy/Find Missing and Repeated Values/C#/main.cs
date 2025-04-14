// Problem: Find Missing and Repeated Values
// Link to the problem: https://leetcode.com/problems/find-missing-and-repeated-values/
public class Solution
{
    public int[] FindMissingAndRepeatedValues(int[][] grid)
    {
        int[] freq = new int[grid.Length * grid[0].Length];
        Array.Clear(freq, 0, freq.Length);
        int[] ans = new int[2];
        for (int i = 0; i < grid.Length; i++)
        {
            for (int j = 0; j < grid[0].Length; j++)
            {
                freq[grid[i][j] - 1]++;
            }
        }
        for (int i = 0; i < freq.Length; i++)
        {
            if (freq[i] == 0)
            {
                ans[1] = i + 1;
            }
            if (freq[i] == 2)
            {
                ans[0] = i + 1;
            }
        }
        return ans;
    }
}