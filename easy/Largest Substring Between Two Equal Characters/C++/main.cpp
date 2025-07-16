// Problem: Largest Substring Between Two Equal Characters
// Link to the problem: https://leetcode.com/problems/largest-substring-between-two-equal-characters/
class Solution
{
public:
    int maxLengthBetweenEqualCharacters(string s)
    {
        map<char, int> x;
        for (int i = 0; i < s.size(); i++)
        {
            x[s[i]]++;
        }
        map<char, vector<int>> y;
        for (auto i : x)
        {
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == i.first)
                {
                    y[i.first].push_back(j);
                }
            }
        }
        int ans = -1;
        for (auto i : y)
        {
            if (i.second.size() > 1)
            {
                ans = max(ans, *max_element(i.second.begin(), i.second.end()) - *min_element(i.second.begin(), i.second.end()) - 1);
            }
        }
        return ans;
    }
};