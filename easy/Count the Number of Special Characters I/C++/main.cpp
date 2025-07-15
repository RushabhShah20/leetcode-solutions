// Problem: Count the Number of Special Characters I
// Link to the problem: https://leetcode.com/problems/count-the-number-of-special-characters-i/
class Solution
{
public:
    int numberOfSpecialChars(string word)
    {
        int ans = 0;
        vector<int> lower(26, 0), upper(26, 0);
        for (int i = 0; i < word.size(); i++)
        {
            if (islower(word[i]))
            {
                lower[word[i] - 'a']++;
            }
            else
            {
                upper[word[i] - 'A']++;
            }
        }
        for (int i = 0; i < lower.size(); i++)
        {
            if (lower[i] > 0 && upper[i] > 0)
            {
                ans++;
            }
        }
        return ans;
    }
};
