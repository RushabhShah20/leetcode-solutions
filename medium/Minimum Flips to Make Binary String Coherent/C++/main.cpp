// Problem: Minimum Flips to Make Binary String Coherent
// Link to the problem: https://leetcode.com/problems/minimum-flips-to-make-binary-string-coherent/
class Solution
{
public:
    int minFlips(string s)
    {
        int ans = 0;
        const int n = s.size();
        if (n <= 2)
        {
            return 0;
        }
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                x++;
            }
        }
        const int y = n - x;
        ans = max(0, x - 1);
        ans = min(ans, y);
        int z = x;
        if (s[0] == '1')
        {
            z--;
        }
        if (s[n - 1] == '1')
        {
            z--;
        }
        const int a = (s[0] == '0' ? 1 : 0) + (s[n - 1] == '0' ? 1 : 0) + z;
        ans = min(ans, a);
        return ans;
    }
};
