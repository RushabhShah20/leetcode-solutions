// Problem: Minimum Number of Flips to Reverse Binary String
// Link to the problem: https://leetcode.com/problems/minimum-number-of-flips-to-reverse-binary-string/
class Solution
{
public:
    int minimumFlips(int n)
    {
        string s;
        while (n > 0)
        {
            s.append(1, '0' + (n % 2));
            n /= 2;
        }
        string t = s;
        reverse(t.begin(), t.end());
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != t[i])
            {
                ans++;
            }
        }
        return ans;
    }
};