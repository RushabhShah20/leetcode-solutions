// Problem: Count Total Number of Colored Cells
// Link to the problem: https://leetcode.com/problems/count-total-number-of-colored-cells/
class Solution
{
public:
    long long coloredCells(int n)
    {
        long long ans = 0;
        for (long long i = 1; i < (2 * n) - 1; i += 2)
        {
            ans += (2 * i);
        }
        ans += ((2 * n) - 1);
        return ans;
    }
};