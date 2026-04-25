// Problem: Maximize the Distance Between Points on a Square
// Link to the problem: https://leetcode.com/problems/maximize-the-distance-between-points-on-a-square/
class Solution
{
public:
    bool check(const int x, const vector<long long> &a, const int k, const int side)
    {
        const long long p = 4LL * side;
        for (const long long c : a)
        {
            const long long d = c + p - x;
            long long y = c;
            int z = 1;
            for (int i = 1; i < k; i++)
            {
                const auto it = lower_bound(a.begin(), a.end(), x + y);
                if (it == a.end() || *it > d)
                {
                    break;
                }
                y = *it;
                z++;
            }
            if (z == k)
            {
                return true;
            }
        }
        return false;
    }
    int maxDistance(int side, vector<vector<int>> &points, int k)
    {
        vector<long long> a;
        for (const vector<int> &point : points)
        {
            const long long x = point[0], y = point[1];
            if (x == 0)
            {
                a.push_back(y);
            }
            else if (y == side)
            {
                a.push_back(side + x);
            }
            else if (x == side)
            {
                a.push_back(3LL * side - y);
            }
            else
            {
                a.push_back(4LL * side - x);
            }
        }
        sort(a.begin(), a.end());
        int l = 1, r = side, ans = 0;
        while (l <= r)
        {
            const int m = l + (r - l) / 2;
            if (check(m, a, k, side))
            {
                ans = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return ans;
    }
};