// Problem: Minimum Number of Changes to Make Binary String Beautiful
// Link to the problem: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/
class Solution
{
public:
    int minChanges(string s)
    {
        const int n = s.size();
        int ans = 0;
        for (int i = 1; i < n; i += 2)
        {
            if (s[i] != s[i - 1])
            {
                ans++;
            }
        }
        return ans;
    }
};