// Problem: Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
// Link to the problem: https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/
class Solution
{
public:
    int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
    {
        verticalCuts.push_back(w);
        horizontalCuts.push_back(h);
        sort(verticalCuts.begin(), verticalCuts.end());
        sort(horizontalCuts.begin(), horizontalCuts.end());
        const int n = verticalCuts.size(), m = horizontalCuts.size(), mod = 1000000007;
        long long maxX = horizontalCuts[0], maxY = verticalCuts[0];
        for (int i = 1; i < n; i++)
        {
            maxY = max(maxY, (long long)(verticalCuts[i]) - (long long)(verticalCuts[i - 1]));
        }
        for (int i = 1; i < m; i++)
        {
            maxX = max(maxX, (long long)(horizontalCuts[i]) - (long long)(horizontalCuts[i - 1]));
        }
        const int ans = (((maxX % mod) * (maxY % mod)) % mod);
        return ans;
    }
};