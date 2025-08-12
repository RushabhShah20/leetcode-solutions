// Problem: Find Missing Observations
// Link to the problem: https://leetcode.com/problems/find-missing-observations/
class Solution
{
public:
    vector<int> missingRolls(vector<int> &rolls, int mean, int n)
    {
        vector<int> ans;
        unsigned long long x = mean * (n + rolls.size());
        for (int i = 0; i < rolls.size(); i++)
        {
            x -= rolls[i];
        }
        if (x > 6 * n || x < n)
        {
            return ans;
        }
        for (int i = 0; i < n; i++)
        {
            ans.push_back(1);
        }
        x -= n;
        for (int i = 0; i < n; i++)
        {
            if (x >= 5)
            {
                ans[i] += 5;
                x -= 5;
            }
            else
            {
                ans[i] += x;
                break;
            }
        }
        return ans;
    }
};