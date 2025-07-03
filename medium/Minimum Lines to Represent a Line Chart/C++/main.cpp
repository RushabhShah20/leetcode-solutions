// Problem: Minimum Lines to Represent a Line Chart
// Link to the problem: https://leetcode.com/problems/minimum-lines-to-represent-a-line-chart/
class Solution
{
public:
    int minimumLines(vector<vector<int>> &stockPrices)
    {
        if (stockPrices.size() == 1)
        {
            return 0;
        }
        sort(stockPrices.begin(), stockPrices.end());
        int ans = 1;
        for (int i = 1; i < stockPrices.size() - 1; i++)
        {
            long long x1 = stockPrices[i - 1][0], x2 = stockPrices[i][0], x3 = stockPrices[i + 1][0], y1 = stockPrices[i - 1][1], y2 = stockPrices[i][1], y3 = stockPrices[i + 1][1];
            long long a = (y2 - y1) * (x3 - x2), b = (y3 - y2) * (x2 - x1);
            if (a != b)
            {
                ans++;
            }
        }
        return ans;
    }
};