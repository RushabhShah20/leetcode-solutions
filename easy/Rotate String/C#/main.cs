// Problem: Rotate String
// Link to the problem: https://leetcode.com/problems/rotate-string/
public class Solution
{
    public bool RotateString(string s, string goal)
    {
        if (s.Length != goal.Length)
        {
            return false;
        }
        else
        {
            s = s + s;
            bool ans = s.Contains(goal);
            return ans;
        }
    }
}