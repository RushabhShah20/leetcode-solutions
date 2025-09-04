// Problem: Number of Smooth Descent Periods of a Stock
// Link to the problem: https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/
class Solution
{
public:
    long long getDescentPeriods(vector<int> &prices)
    {
        long long ans = 0, count = 1;
        vector<int> a;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] == prices[i - 1] - 1)
            {
                count++;
            }
            else
            {
                a.push_back(count);
                count = 1;
            }
        }
        a.push_back(count);
        for (int i = 0; i < a.size(); i++)
        {
            ans += ((long long)(a[i]) * (long long)(a[i] + 1) / 2);
        }
        return ans;
    }
};