// Problem: Binary Digit Score
// Link to the problem: https://leetcode.com/problems/binary-digit-score/
class Solution
{
public:
    int calculateScore(int a, int b)
    {
        int x = 0, y = 0;
        while (a > 0)
        {
            x += a & 1;
            a >>= 1;
        }
        while (b > 0)
        {
            y += b & 1;
            b >>= 1;
        }
        const int ans = x >= y ? x * y : y / x;
        return ans;
    }
};