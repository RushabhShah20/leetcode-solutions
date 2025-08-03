// Problem: Check Distances Between Same Letters
// Link to the problem: https://leetcode.com/problems/check-distances-between-same-letters/
class Solution
{
public:
    bool checkDistances(string s, vector<int> &distance)
    {
        map<char, int> x;
        for (int i = 0; i < s.size(); i++)
        {
            if (x[s[i]] == 0)
            {
                x[s[i]] -= (i + 1);
            }
            else
            {
                x[s[i]] += (i);
            }
        }
        for (auto i : x)
        {
            if (i.second != distance[i.first - 'a'])
            {
                return false;
            }
        }
        return true;
    }
};