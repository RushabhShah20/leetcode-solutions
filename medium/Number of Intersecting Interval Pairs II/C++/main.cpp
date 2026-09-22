// Problem: Number of Intersecting Interval Pairs II
// Link to the problem: https://leetcode.com/problems/number-of-intersecting-interval-pairs-ii/
class Solution
{
public:
    long long countIntersectingIntervals(vector<vector<int>> &intervals)
    {
        const int n = intervals.size();
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = intervals[i][0];
            b[i] = intervals[i][1];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        long long ans = 0;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            while (j < n && b[j] < a[i])
            {
                j++;
            }
            ans += i - j;
        }
        return ans;
    }
};