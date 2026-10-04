// Problem: Minimum Rotations to Dial a Number I
// Link to the problem: https://leetcode.com/problems/minimum-rotations-to-dial-a-number-i/
class Solution
{
public:
    int minRotations(string s)
    {
        const int n = s.size();
        int ans = 0, x = 0;
        for (int i = 0; i < n; i++)
        {
            const int y = s[i] - '0', z = abs(x - y);
            ans += min(z, 10 - z);
            x = y;
        }
        return ans;
    }
};