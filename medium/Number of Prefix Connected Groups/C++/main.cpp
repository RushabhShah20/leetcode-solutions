// Problem: Number of Prefix Connected Groups
// Link to the problem: https://leetcode.com/problems/number-of-prefix-connected-groups/
class Solution
{
public:
    int prefixConnected(vector<string> &words, int k)
    {
        unordered_map<string, int> m;
        for (const string word : words)
        {
            if (word.size() >= k)
            {
                m[word.substr(0, k)]++;
            }
        }
        int ans = 0;
        for (const pair<string, int> i : m)
        {
            if (i.second >= 2)
            {
                ans++;
            }
        }
        return ans;
    }
};