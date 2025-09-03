// Problem: Odd String Difference
// Link to the problem: https://leetcode.com/problems/odd-string-difference/
public class Solution
{
    public string OddString(string[] words)
    {
        int m = words.Length;
        string ans = "";
        int[][] diff = new int[m][];
        for (int i = 0; i < m; i++)
        {
            diff[i] = new int[words[0].Length - 1];
            for (int j = 0; j < words[0].Length - 1; j++)
            {
                diff[i][j] = words[i][j + 1] - words[i][j];
            }
        }
        if (diff[1].SequenceEqual(diff[2]))
        {
            if (!diff[0].SequenceEqual(diff[1]) && !diff[0].SequenceEqual(diff[2]))
            {
                return words[0];
            }
        }
        for (int i = 1; i < diff.Length - 1; i++)
        {
            if (diff[i - 1].SequenceEqual(diff[i + 1]))
            {
                if (!diff[i].SequenceEqual(diff[i - 1]) && !diff[i].SequenceEqual(diff[i + 1]))
                {
                    return words[i];
                }
            }
        }
        if (diff[m - 3].SequenceEqual(diff[m - 2]))
        {
            if (!diff[m - 1].SequenceEqual(diff[m - 2]) && !diff[m - 1].SequenceEqual(diff[m - 3]))
            {
                return words[m - 1];
            }
        }
        return ans;
    }
}