// Problem: Number of Strings That Appear as Substrings in Word
// Link to the problem: https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
class Solution
{
public:
    int numOfStrings(vector<string> &patterns, string word)
    {
        int ans = 0;
        for (int i = 0; i < patterns.size(); i++)
        {
            if (word.find(patterns[i]) != word.npos)
            {
                ans++;
            }
        }
        return ans;
    }
};