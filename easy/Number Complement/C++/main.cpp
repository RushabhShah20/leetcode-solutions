// Problem: Number Complement
// Link to the problem: https://leetcode.com/problems/number-complement/
class Solution
{
public:
    int findComplement(int num)
    {
        if (num == 0)
        {
            return 1;
        }
        int x = 1;
        while (x < num)
        {
            x = (x << 1) | 1;
        }
        const int ans = num ^ x;
        return ans;
    }
};