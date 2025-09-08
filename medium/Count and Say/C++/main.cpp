// Problem: Count and Say
// Link to the problem: https://leetcode.com/problems/count-and-say/
class Solution
{
public:
    vector<pair<int, int>> encode(string s)
    {
        if (s.size() == 1)
        {
            return {{1, 1}};
        }
        vector<pair<int, int>> ans;
        ans.push_back({s[0] - '0', 1});
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                ans.back().second++;
            }
            else
            {
                ans.push_back({s[i] - '0', 1});
            }
        }
        return ans;
    }
    string decode(vector<pair<int, int>> a)
    {
        string ans = "";
        for (int i = 0; i < a.size(); i++)
        {
            ans.append(1, (a[i].second + '0'));
            ans.append(1, (a[i].first + '0'));
        }
        return ans;
    }
    string countAndSay(int n)
    {
        string ans = "1";
        for (int i = 0; i < n - 1; i++)
        {
            vector<pair<int, int>> x = encode(ans);
            ans = decode(x);
        }
        return ans;
    }
};