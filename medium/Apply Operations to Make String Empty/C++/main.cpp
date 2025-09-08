// Problem: Apply Operations to Make String Empty
// Link to the problem: https://leetcode.com/problems/apply-operations-to-make-string-empty/
class Solution
{
public:
    string lastNonEmptyString(string s)
    {
        string ans = "";
        vector<int> freq(26, 0);
        vector<int> lastPos(26, -1);
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
            lastPos[s[i] - 'a'] = i;
        }
        int x = *max_element(freq.begin(), freq.end());
        vector<pair<char, int>> y;
        for (int i = 0; i < lastPos.size(); i++)
        {
            if (freq[i] == x)
            {
                y.push_back({i + 'a', lastPos[i]});
            }
        }
        sort(y.begin(), y.end(), [](const pair<char, int> &a, pair<char, int> &b)
        { 
            return a.second < b.second; 
        });
        for (int i = 0; i < y.size(); i++)
        {
            ans.append(1, y[i].first);
        }
        return ans;
    }
};