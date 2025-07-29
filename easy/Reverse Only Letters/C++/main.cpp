// Problem: Reverse Only Letters
// Link to the problem: https://leetcode.com/problems/reverse-only-letters/
class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        vector<int> indices;
        for (int i = 0; i < s.size(); i++)
        {
            if (islower(s[i]) || isupper(s[i]))
            {
                indices.push_back(i);
            }
        }
        for (int i = 0; i < indices.size() / 2; i++)
        {
            char temp = s[indices[i]];
            s[indices[i]] = s[indices[indices.size() - 1 - i]];
            s[indices[indices.size() - 1 - i]] = temp;
        }
        return s;
    }
};