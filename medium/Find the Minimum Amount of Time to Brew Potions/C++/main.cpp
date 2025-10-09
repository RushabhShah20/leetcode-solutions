// Problem: Find the Minimum Amount of Time to Brew Potions
// Link to the problem: https://leetcode.com/problems/find-the-minimum-amount-of-time-to-brew-potions/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long minTime(vector<int> &skill, vector<int> &mana)
    {
        int n = skill.size(), m = mana.size();
        vector<long long> ans(n + 1, 0);
        for (int j = 0; j < m; ++j)
        {
            for (int i = 0; i < n; ++i)
            {
                ans[i + 1] = max(ans[i + 1], ans[i]) + ((long long)mana[j] * (long long)skill[i]);
            }
            for (int i = n - 1; i > 0; --i)
            {
                ans[i] = ans[i + 1] - ((long long)mana[j] * (long long)skill[i]);
            }
        }
        return ans[n];
    }
};