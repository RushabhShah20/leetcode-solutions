// Problem: Increasing Decreasing String
// Link to the problem: https://leetcode.com/problems/increasing-decreasing-string/
class Solution
{
public:
    string sortString(string s)
    {
        string ans;
        vector<int> freq(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < freq.size(); j++)
            {
                if (freq[j] > 0)
                {
                    ans.push_back(j + 'a');
                    freq[j]--;
                }
            }
            for (int j = freq.size() - 1; j >= 0; j--)
            {
                if (freq[j] > 0)
                {
                    ans.push_back(j + 'a');
                    freq[j]--;
                }
            }
        }
        return ans;
    }
};