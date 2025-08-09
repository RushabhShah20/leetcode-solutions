// Problem: Minimum Recolors to Get K Consecutive Black Blocks
// Link to the problem: https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/
class Solution
{
public:
    int minimumRecolors(string blocks, int k)
    {
        int ans = 0, count = 0, n = blocks.size();
        for (int i = 0; i < n; i++)
        {
            if (i >= k)
            {
                if (blocks[i] == 'B')
                {
                    count++;
                }
                if (blocks[i - k] == 'B')
                {
                    count--;
                }
            }
            else
            {
                if (blocks[i] == 'B')
                {
                    count++;
                }
            }
            if (i >= (k - 1))
            {
                ans = max(ans, count);
            }
        }
        return ((ans >= k) ? (0) : (k - ans));
    }
};