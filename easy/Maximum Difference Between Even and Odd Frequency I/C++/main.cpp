// Problem: Maximum Difference Between Even and Odd Frequency I
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/
class Solution
{
public:
    int maxDifference(string s)
    {
        int ans = 0;
        map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        vector<int> even, odd;
        for (auto i : m)
        {
            if (i.second % 2 == 0)
            {
                even.push_back(i.second);
            }
            else
            {
                odd.push_back(i.second);
            }
        }
        ans = *max_element(odd.begin(), odd.end()) - *min_element(even.begin(), even.end());
        return ans;
    }
};