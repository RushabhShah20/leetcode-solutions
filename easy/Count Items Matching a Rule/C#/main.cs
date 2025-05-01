// Problem: Count Items Matching a Rule
// Link to the problem: https://leetcode.com/problems/count-items-matching-a-rule/
public class Solution
{
    public int CountMatches(IList<IList<string>> items, string ruleKey, string ruleValue)
    {
        int ans = 0;
        for (int i = 0; i < items.Count; i++)
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
}