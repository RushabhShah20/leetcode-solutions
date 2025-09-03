// Problem: Find the Number of Ways to Place People II
// Link to the problem: https://leetcode.com/problems/find-the-number-of-ways-to-place-people-ii/
class Solution
{
public:
    int numberOfPairs(vector<vector<int>> &points)
    {
        int ans = 0, n = points.size();
        if (n <= 1)
        {
            return 0;
        }
        sort(points.begin(), points.end(), [](const vector<int> &a, const vector<int> &b) 
        {
            if (a[0] != b[0]) 
            {
                return a[0] < b[0];
            }
            return a[1] > b[1];
        });
        for (int i = 0; i < n; ++i)
        {
            int maxY = INT_MIN;
            for (int j = i + 1; j < n; ++j)
            {
                if (points[j][1] <= points[i][1])
                {
                    if (points[j][1] > maxY)
                    {
                        ans++;
                    }
                    maxY = max(maxY, points[j][1]);
                }
            }
        }
        return ans;
    }
};