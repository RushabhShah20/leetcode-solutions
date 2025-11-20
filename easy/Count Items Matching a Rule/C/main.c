// Problem: Count Items Matching a Rule
// Link to the problem: https://leetcode.com/problems/count-items-matching-a-rule/
int countMatches(char ***items, int itemsSize, int *itemsColSize, char *ruleKey, char *ruleValue)
{
    int ans = 0;
    for (int i = 0; i < itemsSize; i++)
    {
        if (strcmp(ruleKey, "type") == 0 && strcmp(items[i][0], ruleValue) == 0)
        {
            ans++;
        }
        if (strcmp(ruleKey, "color") == 0 && strcmp(items[i][1], ruleValue) == 0)
        {
            ans++;
        }
        if (strcmp(ruleKey, "name") == 0 && strcmp(items[i][2], ruleValue) == 0)
        {
            ans++;
        }
    }
    return ans;
}