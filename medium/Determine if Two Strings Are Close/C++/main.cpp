// Problem: Determine if Two Strings Are Close
// Link to the problem: https://leetcode.com/problems/determine-if-two-strings-are-close/
class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        const int m = word1.size(), n = word2.size();
        if (m != n)
        {
            return false;
        }
        vector<int> freq1(26, 0), freq2(26, 0);
        for (int i = 0; i < n; i++)
        {
            freq1[word1[i] - 'a']++;
            freq2[word2[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if ((freq1[i] == 0 && freq2[i] != 0) || (freq1[i] != 0 && freq2[i] == 0))
            {
                return false;
            }
        }
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        if (freq1 == freq2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};