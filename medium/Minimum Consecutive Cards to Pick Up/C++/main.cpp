// Problem: Minimum Consecutive Cards to Pick Up
// Link to the problem: https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/
class Solution
{
public:
    int minimumCardPickup(vector<int> &cards)
    {
        int ans = INT_MAX;
        map<int, vector<int>> x;
        for (int i = 0; i < cards.size(); i++)
        {
            x[cards[i]].push_back(i);
        }
        for (auto i : x)
        {
            if (i.second.size() > 1)
            {
                for (int j = 0; j < i.second.size() - 1; j++)
                {
                    ans = min(ans, i.second[j + 1] - i.second[j] + 1);
                }
            }
        }
        return ((ans == INT_MAX) ? (-1) : (ans));
    }
};