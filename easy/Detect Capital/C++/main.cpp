// Problem: Detect Capital
// Link to the problem: https://leetcode.com/problems/detect-capital/
class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        bool all_uppercase = true, all_lowercase = true;
        for (int i = 1; i < word.size(); i++)
        {
            if (islower(word[i]))
            {
                all_uppercase = false;
            }
            if (isupper(word[i]))
            {
                all_lowercase = false;
            }
        }
        if (islower(word[0]) && all_lowercase == true)
        {
            return true;
        }
        else if (isupper(word[0]) && all_uppercase == true)
        {
            return true;
        }
        else if (isupper(word[0]) && all_lowercase == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};