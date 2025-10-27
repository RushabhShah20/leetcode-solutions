// Problem: Number of Laser Beams in a Bank
// Link to the problem: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
public class Solution
{
    public int NumberOfBeams(string[] bank)
    {
        int ans = 0, prev = 0;
        foreach (string s in bank)
        {
            int count = 0;
            foreach (char c in s)
            {
                if (c == '1')
                {
                    count++;
                }
            }
            ans += (count * prev);
            if (count > 0)
            {
                prev = count;
            }
        }
        return ans;
    }
}