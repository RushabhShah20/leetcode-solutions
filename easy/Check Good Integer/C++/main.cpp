// Problem: Check Good Integer
// Link to the problem: https://leetcode.com/problems/check-good-integer/
class Solution
{
public:
    bool checkGoodInteger(int n)
    {
        int x = 0, y = 0;
        while (n > 0)
        {
            const int z = n % 10;
            x += z;
            y += z * z;
            n /= 10;
        }
        const bool ans = y - x >= 50;
        return ans;
    }
};