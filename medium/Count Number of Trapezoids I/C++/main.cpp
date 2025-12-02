// Problem: Count Number of Trapezoids I
// Link to the problem: https://leetcode.com/problems/count-number-of-trapezoids-i/
class Solution
{
public:
    int countTrapezoids(vector<vector<int>> &points)
    {
        int ans = 0, mod = 1000000007;
        map<int, int> m;
        for (const vector<int> point : points)
        {
            m[point[1]]++;
        }
        long long sum = 0;
        for (const pair<int, int> i : m)
        {
            const long long x = ((long long)(i.second) * (long long)(i.second - 1)) / (long long)(2);
            ans = ((ans + (sum * x)) % mod);
            sum = ((sum + x) % mod);
        }
        return ans;
    }
};