// Problem: Count the Number of Consistent Strings
// Link to the problem: https://leetcode.com/problems/count-the-number-of-consistent-strings/
class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int ans = 0;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[i].size(); j++)
            {
                if (allowed.find(words[i][j]) == allowed.npos)
                {
                    goto next;
                }
            }
            ans++;
        next:;
        }
        return ans;
    }
};