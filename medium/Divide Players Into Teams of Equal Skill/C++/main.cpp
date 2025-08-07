// Problem: Divide Players Into Teams of Equal Skill
// Link to the problem: https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/
class Solution
{
public:
    long long dividePlayers(vector<int> &skill)
    {
        long long ans = 0;
        sort(skill.begin(), skill.end());
        int n = skill.size();
        map<int, vector<vector<int>>> x;
        for (int i = 0; i < n / 2; i++)
        {
            x[skill[i] + skill[n - i - 1]].push_back({skill[i], skill[n - i - 1]});
        }
        if (x.size() > 1)
        {
            return -1;
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                ans += (skill[i] * skill[n - i - 1]);
            }
            return ans;
        }
    }
};