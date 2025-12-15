// Problem: Custom Sort String
// Link to the problem: https://leetcode.com/problems/custom-sort-string/
class Solution
{
public:
    string customSortString(string order, string s)
    {
        string ans;
        map<char, int> m;
        for (const char c : s)
        {
            x[c]++;
        }
        for (int i = 0; i < order.size(); i++)
        {
            ans.append(m[order[i]], order[i]);
            m.erase(order[i]);
        }
        for (const pair<char, int> i : m)
        {
            ans.append(i.second, i.first);
        }
        return ans;
    }
};