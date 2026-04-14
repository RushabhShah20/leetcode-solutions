// Problem: Minimum Total Distance Traveled
// Link to the problem: https://leetcode.com/problems/minimum-total-distance-traveled/
class Solution
{
public:
    long long solve(const int r, const int f, vector<int> &robot, vector<int> &factory, vector<vector<long long>> &dp)
    {
        if (r == robot.size())
        {
            return 0;
        }
        if (f == factory.size())
        {
            return 1e15;
        }
        if (dp[r][f] != -1)
        {
            return dp[r][f];
        }
        const long long x = abs(robot[r] - factory[f]) + solve(r + 1, f + 1, robot, factory, dp);
        const long long y = solve(r, f + 1, robot, factory, dp);
        return dp[r][f] = min(x, y);
    }
    long long minimumTotalDistance(vector<int> &robot, vector<vector<int>> &factory)
    {
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());
        vector<int> a;
        for (const vector<int> &i : factory)
        {
            for (int j = 0; j < i[1]; j++)
            {
                a.push_back(i[0]);
            }
        }
        const int n = robot.size(), m = a.size();
        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, -1));
        return solve(0, 0, robot, a, dp);
    }
};