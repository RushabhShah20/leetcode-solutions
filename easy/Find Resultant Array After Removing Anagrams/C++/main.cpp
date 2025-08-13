// Problem: Find Resultant Array After Removing Anagrams
// Link to the problem: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
class Solution
{
public:
    vector<string> removeAnagrams(vector<string> &words)
    {
        for (int i = words.size() - 1; i >= 1; i--)
        {
            map<char, int> x, y;
            for (int j = 0; j < words[i - 1].size(); j++)
            {
                x[words[i - 1][j]]++;
            }
            for (int j = 0; j < words[i].size(); j++)
            {
                y[words[i][j]]++;
            }
            if (x == y)
            {
                words.erase(words.begin() + i);
            }
        }
        return words;
    }
};