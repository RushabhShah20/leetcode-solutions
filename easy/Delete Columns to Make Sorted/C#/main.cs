// Problem: Delete Columns to Make Sorted
// Link to the problem: https://leetcode.com/problems/delete-columns-to-make-sorted/
public class Solution
{
    public int MinDeletionSize(string[] strs)
    {
        int ans = 0, n = strs.Length, m = strs[0].Length;
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if ((strs[i][j] - 'a') > (strs[i + 1][j] - 'a'))
                {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
}