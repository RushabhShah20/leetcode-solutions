// Problem: Koko Eating Bananas
// Link to the problem: https://leetcode.com/problems/koko-eating-bananas/
class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        int ans = r;
        while (l <= r)
        {
            int m = (l + r) / 2;
            long long total = 0;
            for (const int &pile : piles)
            {
                total += ((pile % m == 0) ? ((pile / m)) : ((pile / m) + 1));
            }
            if (total <= h)
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return ans;
    }
};