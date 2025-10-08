// Problem: Successful Pairs of Spells and Potions
// Link to the problem: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        vector<int> ans(spells.size(), 0);
        sort(potions.begin(), potions.end());
        for (int i = 0; i < spells.size(); i++)
        {
            int x = -1;
            int l = 0, r = potions.size() - 1;
            while (l < r)
            {
                int m = l + (r - l) / 2;
                long long y = (long long)(potions[m]) * (long long)(spells[i]);
                if (y < success)
                {
                    l = m + 1;
                }
                else
                {
                    r = m;
                }
            }
            if ((long long)(potions[l]) * (long long)(spells[i]) >= success)
            {
                x = l;
            }
            if (x != -1)
            {
                ans[i] += (potions.size() - x);
            }
        }
        return ans;
    }
};