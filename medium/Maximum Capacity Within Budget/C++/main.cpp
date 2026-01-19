// Problem: Maximum Capacity Within Budget
// Link to the problem: https://leetcode.com/problems/maximum-capacity-within-budget/
class Solution
{
public:
    int maxCapacity(vector<int> &costs, vector<int> &capacity, int budget)
    {
        const int n = costs.size();
        vector<int> ma(n);
        vector<pair<int, int>> a;
        for (int i = 0; i < n; i++)
        {
            a.push_back({costs[i], capacity[i]});
        }
        sort(a.begin(), a.end());
        ma[0] = a[0].second;
        for (int i = 1; i < n; i++)
        {
            ma[i] = max(ma[i - 1], a[i].second);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i].first < budget)
            {
                ans = max(ans, a[i].second);
            }
            else
            {
                break;
            }
            auto it = lower_bound(a.begin(), a.begin() + i, make_pair(budget - a[i].first, INT_MIN));
            if (it != a.begin())
            {
                ans = max(ans, a[i].second + ma[it - a.begin() - 1]);
            }
        }
        return ans;
    }
};