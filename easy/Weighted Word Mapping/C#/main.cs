// Problem: Weighted Word Mapping
// Link to the problem: https://leetcode.com/problems/weighted-word-mapping/
public class Solution
{
    public string MapWordWeights(string[] words, int[] weights)
    {
        int n = words.Length;
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            int m = words[i].Length;
            for (int j = 0; j < m; j++)
            {
                sum += weights[words[i][j] - 'a'];
            }
            ans.Append((char)('z' - (sum % 26)));
        }
        return ans.ToString();
    }
}