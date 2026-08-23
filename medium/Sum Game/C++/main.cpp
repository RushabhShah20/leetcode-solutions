// Problem: Sum Game
// Link to the problem: https://leetcode.com/problems/sum-game/
class Solution
{
public:
    pair<int, int> get(int n, string s)
    {
        pair<int, int> ans = {0, 0};
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                ans.second++;
            }
            else
            {
                ans.first += s[i] - '0';
            }
        }
        return ans;
    }
    bool sumGame(string num)
    {
        const int n = num.size(), m = n / 2;
        const pair<int, int> x = get(m, num.substr(0, m)), y = get(m, num.substr(m, m));
        const bool ans = ((x.second + y.second) & 1) || (x.first - y.first != (y.second - x.second) * 9 / 2);
        return ans;
    }
};