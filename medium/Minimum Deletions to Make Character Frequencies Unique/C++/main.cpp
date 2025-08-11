// Problem: Minimum Deletions to Make Character Frequencies Unique
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/
class Solution
{
public:
    int minDeletions(string s)
    {
        int ans = 0;
        map<char, int> x;
        for (int i = 0; i < s.size(); i++)
        {
            x[s[i]]++;
        }
        vector<int> y(100001);
        for (auto i : x)
        {
            y[i.second]++;
        }
        for (int i = y.size() - 1; i >= 1; i--)
        {
            if (y[i] > 1)
            {
                int x = y[i] - 1;
                y[i - 1] += x;
                ans += x;
            }
        }
        return ans;
    }
};