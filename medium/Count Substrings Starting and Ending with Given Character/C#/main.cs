// Problem: Count Substrings Starting and Ending with Given Character
// Link to the problem: https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/
public class Solution
{
    public long CountSubstrings(string s, char c)
    {
        long m = 0;
        foreach (char ch in s)
        {
            if (ch == c)
            {
                m++;
            }
        }
        long ans = (m * (m + 1)) / 2;
        return ans;
    }
}