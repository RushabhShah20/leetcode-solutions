// Problem: Valid Word
// Link to the problem: https://leetcode.com/problems/valid-word/
class Solution
{
public:
    bool isValid(string word)
    {
        if (word.size() < 3)
        {
            return false;
        }
        bool isVowelPresent = false, isConsonentPresent = false, isSpecialPresent = false, isDigitPresent = false;
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
            {
                isVowelPresent = true;
            }
            else if (word[i] == '0' || word[i] == '1' || word[i] == '2' || word[i] == '3' || word[i] == '4' || word[i] == '5' || word[i] == '6' || word[i] == '7' || word[i] == '8' || word[i] == '9')
            {
                isDigitPresent = true;
            }
            else if (word[i] == '@' || word[i] == '#' || word[i] == '$')
            {
                isSpecialPresent = true;
            }
            else
            {
                isConsonentPresent = true;
            }
        }
        if (isVowelPresent == false)
        {
            return false;
        }
        if (isConsonentPresent == false)
        {
            return false;
        }
        if (isSpecialPresent == true)
        {
            return false;
        }
        return true;
    }
};