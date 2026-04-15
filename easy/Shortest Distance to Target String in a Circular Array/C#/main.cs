// Problem: Shortest Distance to Target String in a Circular Array
// Link to the problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
public class Solution
{
    public int ClosestTarget(string[] words, string target, int startIndex)
    {
        int n = words.Length, ans = n;
        for (int i = 0; i < n; i++)
        {
            if (words[i] == target)
            {
                int x = Math.Abs(i - startIndex);
                ans = Math.Min(ans, Math.Min(x, n - x));
            }
        }
        return ans == n ? -1 : ans;
    }
}