// Problem: Count Valid Substrings I
// Link to the problem: https://leetcode.com/problems/count-valid-substrings-i/
class Solution
{
public:
    long long countValidSubstrings(string s)
    {
        const int n = s.size();
        long long ans = 0;
        int i = 0;
        for (int j = 0; j < n; j++)
        {
            if (j >= 2 && s[j - 2] == 'a' && s[j - 1] == 'b' && s[j] == 'c')
            {
                i = j - 1;
            }
            ans += j - i + 1;
        }
        return ans;
    }
};