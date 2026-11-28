// Problem: Maximum Number of Items From Sale II
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-ii/
class Solution
{
public:
    int maximumSaleItems(vector<vector<int>> &items, int budget)
    {
        const int n = items.size();
        sort(items.begin(), items.end(),
             [](const vector<int> &a, const vector<int> &b)
             { return a[1] < b[1]; });
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, items[i][0]);
        }
        vector<int> a(mx + 1, 0);
        for (int i = 0; i < n; i++)
        {
            a[items[i][0]]++;
        }
        for (int i = 1; i <= mx; i++)
        {
            if (a[i] > 0)
            {
                for (int j = i << 1; j <= mx; j += i)
                {
                    a[i] += a[j];
                }
            }
        }
        const int mn = items[0][1];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            const int x = items[i][0], y = items[i][1];
            if (y - mn > mn)
            {
                break;
            }
            const int b = a[x] - 1, c = min(b, budget / y);
            ans += c << 1;
            budget -= c * y;
        }
        ans += budget / mn;
        return ans;
    }
};
