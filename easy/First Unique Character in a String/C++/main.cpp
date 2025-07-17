// Problem: First Unique Character in a String
// Link to the problem: https://leetcode.com/problems/first-unique-character-in-a-string/
class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<int> freq(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (freq[s[i] - 'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};