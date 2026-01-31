// Problem: Find Smallest Letter Greater Than Target
// Link to the problem: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
public class Solution
{
    public char NextGreatestLetter(char[] letters, char target)
    {
        int n = letters.Length;
        int l = 0, r = n - 1;
        char ans = letters[0];
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (letters[m] > target)
            {
                ans = letters[m];
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return ans;
    }
}