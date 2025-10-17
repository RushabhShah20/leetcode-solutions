// Problem: Maximize the Number of Partitions After Operations
// Link to the problem: https://leetcode.com/problems/maximize-the-number-of-partitions-after-operations/
class Solution
{
public:
    int maxPartitionsAfterOperations(string s, int k)
    {
        if (k == 26)
        {
            return 1;
        }
        int n = s.length();
        vector<int> leftMask(n), leftDup(n), leftParts(n);
        int mask = 0, dup = 0, parts = 1;
        for (int i = 0; i < n; i++)
        {
            int bit = 1 << (s[i] - 'a');
            dup |= mask & bit;
            mask |= bit;
            if (__builtin_popcount(mask) > k)
            {
                mask = bit;
                dup = 0;
                parts++;
            }
            leftMask[i] = mask;
            leftDup[i] = dup;
            leftParts[i] = parts;
        }
        int ans = parts;
        mask = dup = parts = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int bit = 1 << (s[i] - 'a');
            dup |= mask & bit;
            mask |= bit;
            int bitCount = __builtin_popcount(mask);
            if (bitCount > k)
            {
                mask = bit;
                dup = 0;
                parts++;
                bitCount = 1;
            }
            if (bitCount == k)
            {
                if ((bit & dup) && (bit & leftDup[i]) &&
                    (__builtin_popcount(leftMask[i]) == k) &&
                    ((leftMask[i] | mask) != 0x3FFFFFF))
                {
                    ans = max(ans, parts + leftParts[i] + 2);
                }
                else if (dup)
                {
                    ans = max(ans, parts + leftParts[i] + 1);
                }
            }
        }
        return ans;
    }
};