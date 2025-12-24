// Problem: Minimum Number of Operations to Reinitialize a Permutation
// Link to the problem: https://leetcode.com/problems/minimum-number-of-operations-to-reinitialize-a-permutation/
class Solution
{
public:
    int reinitializePermutation(int n)
    {
        int ans = 0, i = 1;
        while (i > 1 || ans == 0)
        {
            if (i < n / 2)
            {
                i *= 2;
            }
            else
            {
                i = 2 * (i - (n / 2)) + 1;
            }
            ans++;
        }
        return ans;
    }
};