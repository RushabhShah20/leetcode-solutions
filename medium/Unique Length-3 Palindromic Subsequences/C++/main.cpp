// Problem: Unique Length-3 Palindromic Subsequences
// Link to the problem: https://leetcode.com/problems/unique-length-3-palindromic-subsequences/
class Solution
{
public:
    int countPalindromicSubsequence(string s)
    {
        int ans = 0;
        map<char, vector<int>> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]].push_back(i);
        }
        for (pair<char, vector<int>> i : m)
        {
            sort(i.second.begin(), i.second.end());
            if (i.second.size() > 1)
            {
                set<char> x;
                for (int j = i.second.front() + 1; j < i.second.back(); j++)
                {
                    x.insert(s[j]);
                }
                ans += x.size();
            }
        }
        return ans;
    }
};