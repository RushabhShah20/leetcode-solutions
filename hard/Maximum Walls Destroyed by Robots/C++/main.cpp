// Problem: Maximum Walls Destroyed by Robots
// Link to the problem: https://leetcode.com/problems/maximum-walls-destroyed-by-robots/
class Solution
{
public:
    int countWalls(const int l, const int r, const vector<int> &walls)
    {
        if (l > r)
        {
            return 0;
        }
        const auto it1 = lower_bound(walls.begin(), walls.end(), l);
        const auto it2 = upper_bound(walls.begin(), walls.end(), r);
        return distance(it1, it2);
    }
    int maxWalls(vector<int> &robots, vector<int> &distance, vector<int> &walls)
    {
        const int n = robots.size();
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = {robots[i], distance[i]};
        }
        sort(a.begin(), a.end());
        sort(walls.begin(), walls.end());
        vector<vector<int>> dp(n, vector<int>(2, 0));
        const int l = a[0].first - a[0].second;
        const int r = (n > 1) ? min(a[0].first + a[0].second, a[1].first) : a[0].first + a[0].second;
        dp[0][0] = countWalls(l, a[0].first, walls);
        dp[0][1] = countWalls(a[0].first, r, walls);
        for (int i = 1; i < n; i++)
        {
            const int pos = a[i].first;
            const int dist = a[i].second;
            const int prev_pos = a[i - 1].first;
            const int prev_dist = a[i - 1].second;
            const int next_pos = (i + 1 < n) ? a[i + 1].first : 2e9;
            const int curL_start = max(pos - dist, prev_pos);
            const int curR_end = min(pos + dist, next_pos);
            const int wallsL = countWalls(curL_start, pos, walls);
            const int wallsR = countWalls(pos, curR_end, walls);
            const int prevR_end = min(prev_pos + prev_dist, pos);
            const int overlapRL = countWalls(curL_start, prevR_end, walls);
            const bool wallAtPrev = binary_search(walls.begin(), walls.end(), prev_pos);
            const int overlapLL = (wallAtPrev && pos - dist <= prev_pos) ? 1 : 0;
            const bool wallAtCur = binary_search(walls.begin(), walls.end(), pos);
            const int overlapRR = (wallAtCur && prev_pos + prev_dist >= pos) ? 1 : 0;
            dp[i][0] = max(dp[i - 1][0] + wallsL - overlapLL, dp[i - 1][1] + wallsL - overlapRL);
            dp[i][1] = max(dp[i - 1][0] + wallsR, dp[i - 1][1] + wallsR - overlapRR);
        }
        return max(dp[n - 1][0], dp[n - 1][1]);
    }
};