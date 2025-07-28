// Problem: Reverse Vowels of a String
// Link to the problem: https://leetcode.com/problems/reverse-vowels-of-a-string/
class Solution
{
public:
    string reverseVowels(string s)
    {
        vector<int> indices;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                indices.push_back(i);
            }
        }
        for (int i = 0; i < indices.size() / 2; i++)
        {
            char temp = s[indices[i]];
            s[indices[i]] = s[indices[indices.size() - i - 1]];
            s[indices[indices.size() - i - 1]] = temp;
        }
        return s;
    }
};