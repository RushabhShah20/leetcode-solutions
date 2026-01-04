// Problem: Number of Orders in the Backlog
// Link to the problem: https://leetcode.com/problems/number-of-orders-in-the-backlog/
class Solution
{
public:
    int getNumberOfBacklogOrders(vector<vector<int>> &orders)
    {
        priority_queue<pair<long long, long long>> buy, sell;
        long long ans = 0, mod = 1000000007;
        for (const vector<int> &order : orders)
        {
            ans += order[1];
            if (order[2] == 0)
            {
                buy.push(make_pair(order[0], order[1]));
            }
            else
            {
                sell.push(make_pair(-order[0], order[1]));
            }
            while (!sell.empty() && !buy.empty() && -sell.top().first <= buy.top().first)
            {
                pair<long long, long long> x = buy.top();
                buy.pop();
                pair<long long, long long> y = sell.top();
                sell.pop();
                long long c = min(x.second, y.second);
                ans -= (2 * c);
                if (x.second > c)
                {
                    pair<long long, long long> z = make_pair(x.first, x.second - c);
                    buy.push(z);
                }
                if (y.second > c)
                {
                    pair<long long, long long> z = make_pair(y.first, y.second - c);
                    sell.push(z);
                }
            }
        }
        ans %= mod;
        return ans;
    }
};