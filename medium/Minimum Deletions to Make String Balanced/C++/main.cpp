// Problem: Minimum Deletions to Make String Balanced
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
class Solution
{
public:
    int minimumDeletions(string s)
    {
        int ans = 0, count = 0;
        for (const char &c : s)
        {
            if (c == 'b')
            {
                count++;
            }
            else
            {
                ans = min(ans + 1, count);
            }
        }
        return ans;
    }
};