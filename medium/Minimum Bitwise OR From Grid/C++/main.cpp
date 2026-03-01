// Problem: Minimum Bitwise OR From Grid
// Link to the problem: https://leetcode.com/problems/minimum-bitwise-or-from-grid/
class Solution
{
public:
    int minimumOR(vector<vector<int>> &grid)
    {
        int ans = (1 << 17) - 1;
        for (int k = 16; k >= 0; k--)
        {
            const int x = ans ^ (1 << k);
            bool a = true;
            for (const vector<int> &row : grid)
            {
                bool b = false;
                for (const int val : row)
                {
                    if ((val | x) == x)
                    {
                        b = true;
                        break;
                    }
                }
                if (!b)
                {
                    a = false;
                    break;
                }
            }
            if (a)
            {
                ans = x;
            }
        }
        return ans;
    }
};