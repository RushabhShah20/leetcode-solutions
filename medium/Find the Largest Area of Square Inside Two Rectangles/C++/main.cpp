// Problem: Find the Largest Area of Square Inside Two Rectangles
// Link to the problem: https://leetcode.com/problems/find-the-largest-area-of-square-inside-two-rectangles/
class Solution
{
public:
    long long largestSquareArea(vector<vector<int>> &bottomLeft, vector<vector<int>> &topRight)
    {
        const int n = bottomLeft.size();
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                const int p = min(topRight[j][0], topRight[i][0]) - max(bottomLeft[j][0], bottomLeft[i][0]), q = min(topRight[j][1], topRight[i][1]) - max(bottomLeft[j][1], bottomLeft[i][1]);
                if (p > 0 && q > 0)
                {
                    const long long x = min(p, q);
                    ans = max(ans, x * x);
                }
            }
        }
        return ans;
    }
};