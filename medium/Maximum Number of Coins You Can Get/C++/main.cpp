// Problem: Maximum Number of Coins You Can Get
// Link to the problem: https://leetcode.com/problems/maximum-number-of-coins-you-can-get/
class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        sort(piles.begin(), piles.end());
        int ans = 0;
        while (!piles.empty())
        {
            piles.erase(piles.end() - 1);
            ans += piles.back();
            piles.erase(piles.end() - 1);
            piles.erase(piles.begin());
        }
        return ans;
    }
};