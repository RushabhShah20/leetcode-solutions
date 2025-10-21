// Problem: Construct the Longest New String
// Link to the problem: https://leetcode.com/problems/construct-the-longest-new-string/
public class Solution
{
    public int LongestString(int x, int y, int z)
    {
        if (x > y)
        {
            return ((2 * ((y) + (y + 1))) + (2 * z));
        }
        else if (x < y)
        {
            return ((2 * ((x) + (x + 1))) + (2 * z));
        }
        else
        {
            return ((2 * (x + y)) + (2 * z));
        }
    }
}