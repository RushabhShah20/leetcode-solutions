// Problem: Minimum Deletion Cost to Make All Characters Equal
// Link to the problem: https://leetcode.com/problems/minimum-deletion-cost-to-make-all-characters-equal/
class Solution
{
public:
    long long minCost(string s, vector<int> &cost)
    {
        const int n = s.size();
        vector<long long> freq(26, 0);
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a'] += cost[i];
        }
        long long maxCost = 0, totalCost = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > maxCost)
            {
                maxCost = freq[i];
            }
            totalCost += freq[i];
        }
        const long long ans = totalCost - maxCost;
        return ans;
    }
};