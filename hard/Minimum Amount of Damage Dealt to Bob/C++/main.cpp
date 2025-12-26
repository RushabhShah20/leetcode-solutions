// Problem: Minimum Amount of Damage Dealt to Bob
// Link to the problem: https://leetcode.com/problems/minimum-amount-of-damage-dealt-to-bob/
class Solution
{
public:
    long long minDamage(int power, vector<int> &damage, vector<int> &health)
    {
        int n = health.size();
        vector<pair<long long, long long>> dps(n);
        for (int i = 0; i < n; i++)
        {
            dps[i] = {damage[i], (health[i] + power - 1) / power};
        }
        sort(dps.begin(), dps.end(), [](const pair<long long, long long> &a, const pair<long long, long long> &b)
             { return a.first * b.second > b.first * a.second; });
        long long ans = 0, time = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (dps[i].first * ((long long)(time) + dps[i].second));
            time += (dps[i].second);
        }
        return ans;
    }
};