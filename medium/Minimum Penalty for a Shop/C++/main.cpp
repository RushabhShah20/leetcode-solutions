// Problem: Minimum Penalty for a Shop
// Link to the problem: https://leetcode.com/problems/minimum-penalty-for-a-shop/
class Solution
{
public:
    int bestClosingTime(string customers)
    {
        int n = customers.size();
        vector<int> open(n + 1, 0), close(n + 1, 0);
        open[0] = 0;
        if (customers[0] == 'N')
        {
            open[1] = 1;
        }
        else
        {
            open[1] = 0;
        }
        for (int i = 2; i <= n; i++)
        {
            if (customers[i - 1] == 'N')
            {
                open[i] = open[i - 1] + 1;
            }
            else
            {
                open[i] = open[i - 1];
            }
        }
        close[n] = 0;
        if (customers[n - 1] == 'Y')
        {
            close[n - 1] = 1;
        }
        else
        {
            close[n - 1] = 0;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (customers[i] == 'Y')
            {
                close[i] = close[i + 1] + 1;
            }
            else
            {
                close[i] = close[i + 1];
            }
        }
        int minPenalty = (2 * n) + 1;
        vector<int> penalty(n + 1);
        for (int i = 0; i <= n; i++)
        {
            penalty[i] = open[i] + close[i];
            if (minPenalty > penalty[i])
            {
                minPenalty = penalty[i];
            }
        }
        int ans = -1;
        for (int i = 0; i <= n; i++)
        {
            if (penalty[i] == minPenalty)
            {
                return i;
            }
        }
        return ans;
    }
};