// Problem: Permutation Difference between Two Strings
// Link to the problem: https://leetcode.com/problems/permutation-difference-between-two-strings/
class Solution
{
public:
    int findPermutationDifference(string s, string t)
    {
        int ans = 0;
        map<char, vector<int>> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]].push_back(i);
            m[t[i]].push_back(i);
        }
        for (auto i : m)
        {
            ans += (*max_element(i.second.begin(), i.second.end()) - *min_element(i.second.begin(), i.second.end()));
        }
        return ans;
    }
};