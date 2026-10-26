// Problem: Find Special Substring of Length K
// Link to the problem: https://leetcode.com/problems/find-special-substring-of-length-k/
class Solution
{
public:
    bool hasSpecialSubstring(string s, int k)
    {
        const int n = s.size();
        int x = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                if (x == k)
                {
                    return true;
                }
                x = 1;
            }
            else
            {
                x++;
            }
        }
        const bool ans = x == k;
        return ans;
    }
};