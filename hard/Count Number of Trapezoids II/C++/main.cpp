// Problem: Count Number of Trapezoids II
// Link to the problem: https://leetcode.com/problems/count-number-of-trapezoids-ii/
class Solution
{
public:
    int countTrapezoids(vector<vector<int>> &points)
    {
        map<int, map<int, int>> t, v;
        int n = points.size();
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int dx = points[j][0] - points[i][0];
                int dy = points[j][1] - points[i][1];
                if (dx < 0 || (dx == 0 && dy < 0))
                {
                    dx = -dx, dy = -dy;
                }
                int g = gcd(dx, abs(dy));
                int sx = dx / g;
                int sy = dy / g;
                int des = sx * points[i][1] - sy * points[i][0];
                int key1 = (sx << 12) | (sy + 2000);
                int key2 = (dx << 12) | (dy + 2000);
                ++t[key1][des];
                ++v[key2][des];
            }
        }
        return count(t) - count(v) / 2;
    }
    int count(map<int, map<int, int>> &mp)
    {
        long long ans = 0;
        for (pair<int, map<int, int>> i : mp)
        {
            long long sum = 0;
            for (pair<int, int> j : i.second)
            {
                sum += j.second;
            }
            for (pair<int, int> j : i.second)
            {
                sum -= j.second;
                ans += j.second * (sum);
            }
        }
        return ans;
    }
};