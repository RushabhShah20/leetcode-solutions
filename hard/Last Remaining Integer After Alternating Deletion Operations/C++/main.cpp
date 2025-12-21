// Problem: Last Remaining Integer After Alternating Deletion Operations
// Link to the problem: https://leetcode.com/problems/last-remaining-integer-after-alternating-deletion-operations/
class Solution
{
public:
    long long lastInteger(long long n)
    {
        long long mask = 0;
        for (int i = 1; i < 63; i += 2)
        {
            mask |= ((long long)(1) << (long long)(i));
        }
        const long long ans = (1 + (mask & (n - 1)));
        return ans;
    }
};