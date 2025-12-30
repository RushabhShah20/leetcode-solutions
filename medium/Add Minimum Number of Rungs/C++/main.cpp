// Problem: Add Minimum Number of Rungs
// Link to the problem: https://leetcode.com/problems/add-minimum-number-of-rungs/
class Solution
{
public:
    int addRungs(vector<int> &rungs, int dist)
    {
        int ans = 0, prev = 0;
        for (const int &rung : rungs)
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
};