// Problem: Alternating Groups I
// Link to the problem: https://leetcode.com/problems/alternating-groups-i/
public class Solution
{
    public int NumberOfAlternatingGroups(int[] colors)
    {
        int ans = 0;
        for (int i = 1; i < colors.Length - 1; i++)
        {
            if (colors[i] != colors[i - 1] && colors[i] != colors[i + 1])
            {
                ans++;
            }
        }
        if (colors[0] != colors[1] && colors[0] != colors[colors.Length - 1])
        {
            ans++;
        }
        if (colors[colors.Length - 1] != colors[colors.Length - 2] && colors[colors.Length - 1] != colors[0])
        {
            ans++;
        }
        return ans;
    }
}