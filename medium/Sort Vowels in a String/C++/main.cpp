// Problem: Sort Vowels in a String
// Link to the problem: https://leetcode.com/problems/sort-vowels-in-a-string/
class Solution
{
public:
    string sortVowels(string s)
    {
        vector<int> indices;
        vector<char> alphabets;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                indices.push_back(i);
                alphabets.push_back(s[i]);
            }
        }
        sort(alphabets.begin(), alphabets.end());
        for (int i = 0; i < indices.size(); i++)
        {
            s[indices[i]] = alphabets[i];
        }
        return s;
    }
};