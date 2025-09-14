// Problem: Minimum Discards to Balance Inventory
// Link to the problem: https://leetcode.com/problems/minimum-discards-to-balance-inventory/
class Solution
{
public:
    int minArrivalsToDiscard(vector<int> &arrivals, int w, int m)
    {
        int ans = 0, n = arrivals.size();
        vector<bool> discards(n, false);
        map<int, int> x;
        for (int i = 0; i < n; i++)
        {
            if (i >= w && discards[i - w] == false)
            {
                x[arrivals[i - w]]--;
            }
            if (x[arrivals[i]] >= m)
            {
                discards[i] = true;
                ans++;
            }
            else
            {
                x[arrivals[i]]++;
            }
        }
        return ans;
    }
};