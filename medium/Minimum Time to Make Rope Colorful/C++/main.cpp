// Problem: Minimum Time to Make Rope Colorful
// Link to the problem: https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
class Solution
{
public:
    int minCost(string colors, vector<int> &neededTime)
    {
        int n = colors.size(), ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (colors[i] == colors[i - 1])
            {
                ans += (min(neededTime[i], neededTime[i - 1]));
                neededTime[i] = max(neededTime[i], neededTime[i - 1]);
            }
        }
        return ans;
    }
};