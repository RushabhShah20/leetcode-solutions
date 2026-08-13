// Problem: Longest Substring of One Repeating Character
// Link to the problem: https://leetcode.com/problems/longest-substring-of-one-repeating-character/
class Solution
{
public:
    vector<int> longestRepeating(string s, string queryCharacters, vector<int> &queryIndices)
    {
        const int n = s.size();
        set<pair<int, int>> t;
        multiset<int> m;
        for (int i = 0; i < n;)
        {
            int j = i;
            while (j < n && s[j] == s[i])
            {
                j++;
            }
            t.insert({i, j - 1});
            m.insert(j - i);
            i = j;
        }
        const int k = queryIndices.size();
        vector<int> ans(k);
        for (int i = 0; i < k; i++)
        {
            int j = queryIndices[i];
            const char c = queryCharacters[i];
            if (s[j] != c)
            {
                auto it = t.upper_bound({j, INT_MAX});
                --it;
                int l = it->first, r = it->second;
                t.erase(it);
                m.erase(m.find(r - l + 1));
                if (l <= j - 1)
                {
                    t.insert({l, j - 1});
                    m.insert(j - l);
                }
                if (j + 1 <= r)
                {
                    t.insert({j + 1, r});
                    m.insert(r - j);
                }
                int newL = j, newR = j;
                auto rightIt = t.lower_bound({j + 1, 0});
                if (rightIt != t.end() && rightIt->first == j + 1 &&
                    s[j + 1] == c)
                {
                    m.erase(m.find(rightIt->second - rightIt->first + 1));
                    newR = rightIt->second;
                    t.erase(rightIt);
                }
                auto leftIt = t.lower_bound({j, 0});
                if (leftIt != t.begin())
                {
                    --leftIt;
                    if (leftIt->second == j - 1 && s[j - 1] == c)
                    {
                        m.erase(m.find(leftIt->second - leftIt->first + 1));
                        newL = leftIt->first;
                        t.erase(leftIt);
                    }
                }
                t.insert({newL, newR});
                m.insert(newR - newL + 1);
                s[j] = c;
            }
            ans[i] = *m.rbegin();
        }
        return ans;
    }
};
