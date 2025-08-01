// Problem: Count the Number of Vowel Strings in Range
// Link to the problem: https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/
class Solution
{
public:
    int vowelStrings(vector<string> &words, int left, int right)
    {
        int ans = 0;
        for (int i = left; i <= right; i++)
        {
            if ((words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u') && (words[i][words[i].size() - 1] == 'a' || words[i][words[i].size() - 1] == 'e' || words[i][words[i].size() - 1] == 'i' || words[i][words[i].size() - 1] == 'o' || words[i][words[i].size() - 1] == 'u'))
            {
                ans++;
            }
        }
        return ans;
    }
};