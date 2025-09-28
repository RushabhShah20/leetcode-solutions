// Problem: Majority Frequency Characters
// Link to the problem: https://leetcode.com/problems/majority-frequency-characters/
class Solution
{
public:
    string majorityFrequencyGroup(string s)
    {
        string ans = "";
        map<char, int> m;
        for (char ch : s)
        {
            m[ch]++;
        }
        map<int, vector<char>> y;
        for (pair<char, int> i : m)
        {
            y[i.second].push_back(i.first);
        }
        int maxFreq = 0;
        for (pair<int, vector<char>> i : y)
        {
            if (maxFreq < i.second.size())
            {
                maxFreq = i.second.size();
            }
        }
        int idx = -1;
        for (pair<int, vector<char>> i : y)
        {
            if (i.second.size() == maxFreq)
            {
                if (idx < i.first)
                {
                    idx = i.first;
                }
            }
        }
        vector<char> a = y[idx];
        for (char i : a)
        {
            ans.append(1, i);
        }
        return ans;
    }
};