// Problem: Find the Number of Winning Players
// Link to the problem: https://leetcode.com/problems/find-the-number-of-winning-players/
class Solution
{
public:
    int winningPlayerCount(int n, vector<vector<int>> &pick)
    {
        int ans = 0;
        map<int, vector<int>> x;
        for (int i = 0; i < pick.size(); i++)
        {
            x[pick[i][0]].push_back(pick[i][1]);
        }
        for (auto i : x)
        {
            map<int, int> y;
            for (int j = 0; j < i.second.size(); j++)
            {
                y[i.second[j]]++;
            }
            int maxFreq = 0;
            for (auto j : y)
            {
                maxFreq = max(maxFreq, j.second);
            }
            if (maxFreq > (i.first))
            {
                ans++;
            }
        }
        return ans;
    }
};