// Problem: Bitwise AND of Numbers Range
// Link to the problem: https://leetcode.com/problems/bitwise-and-of-numbers-range/
class Solution
{
public:
    int rangeBitwiseAnd(int left, int right)
    {
        int count = 0;
        while (left != right && left > 0)
        {
            count++;
            left >>= 1;
            right >>= 1;
        }
        const int ans = (left << count);
        return ans;
    }
};