// Problem: Count Items Matching a Rule
// Link to the problem: https://leetcode.com/problems/count-items-matching-a-rule/
class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int ans = 0;
        for (int i = 0; i < items.size(); i++)
        {
            if (ruleKey == "type" && items[i][0] == ruleValue)
            {
                ans++;
            }
            if (ruleKey == "color" && items[i][1] == ruleValue)
            {
                ans++;
            }
            if (ruleKey == "name" && items[i][2] == ruleValue)
            {
                ans++;
            }
        }
        return ans;
    }
};