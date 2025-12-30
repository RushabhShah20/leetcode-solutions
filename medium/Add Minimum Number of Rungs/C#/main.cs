// Problem: Add Minimum Number of Rungs
// Link to the problem: https://leetcode.com/problems/add-minimum-number-of-rungs/
public class Solution
{
    public int AddRungs(int[] rungs, int dist)
    {
        int ans = 0, prev = 0;
        foreach (int rung in rungs)
        {
            if ((rung - prev) > dist)
            {
                if ((rung - prev) % dist == 0)
                {
                    ans += (((rung - prev) / dist) - 1);
                }
                else
                {
                    ans += ((rung - prev) / dist);
                }
            }
            prev = rung;
        }
        return ans;
    }
}