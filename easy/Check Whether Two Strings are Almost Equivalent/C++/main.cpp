// Problem: Check Whether Two Strings are Almost Equivalent
// Link to the problem: https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/
class Solution
{
public:
    bool checkAlmostEquivalent(string word1, string word2)
    {
        vector<int> freq1(26, 0), freq2(26, 0);
        for (int i = 0; i < word1.size(); i++)
        {
            freq1[word1[i] - 'a']++;
        }
        for (int i = 0; i < word2.size(); i++)
        {
            freq2[word2[i] - 'a']++;
        }
        int maxDiff = 0;
        for (int i = 0; i < freq1.size(); i++)
        {
            maxDiff = max(maxDiff, abs(freq1[i] - freq2[i]));
            if (maxDiff > 3)
            {
                return false;
            }
        }
        return true;
    }
};