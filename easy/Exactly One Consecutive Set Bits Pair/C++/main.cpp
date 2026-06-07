// Problem: Exactly One Consecutive Set Bits Pair
// Link to the problem: https://leetcode.com/problems/exactly-one-consecutive-set-bits-pair/
class Solution
{
public:
    bool consecutiveSetBits(int n)
    {
        vector<int> a;
        while (n > 0)
        {
            a.push_back(n % 2);
            n >>= 1;
        }
        const int m = a.size();
        int x = 0;
        for (int i = 1; i < m; i++)
        {
            if (a[i] == 1 && a[i - 1] == 1)
            {
                x++;
            }
        }
        const bool ans = x == 1;
        return ans;
    }
};