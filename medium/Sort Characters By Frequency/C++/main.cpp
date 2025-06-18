// Problem: Sort Characters By Frequency
// Link to the problem: https://leetcode.com/problems/sort-characters-by-frequency/
class Solution
{
public:
    string frequencySort(string s)
    {
        map<char, int> x;
        for (int i = 0; i < s.size(); i++)
        {
            x[s[i]]++;
        }
        map<int, vector<char>> y;
        for (auto i : x)
        {
            for (int j = 0; j < i.second; j++)
            {
                y[i.second].push_back(i.first);
            }
        }
        string ans = "";
        for (auto i : y)
        {
            for (int j = 0; j < i.second.size(); j++)
            {
                ans += i.second[j];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};