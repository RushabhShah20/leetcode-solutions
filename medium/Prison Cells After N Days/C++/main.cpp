// Problem: Prison Cells After N Days
// Link to the problem: https://leetcode.com/problems/prison-cells-after-n-days/
class Solution
{
public:
    vector<int> prisonAfterNDays(vector<int> &cells, int n)
    {
        vector<int> next(8);
        vector<vector<int>> seen;
        while (n--)
        {
            for (int i = 1; i < 7; ++i)
            {
                next[i] = (cells[i - 1] == cells[i + 1]);
            }
            next[0] = next[7] = 0;
            if (!seen.empty() && seen[0] == next)
            {
                return seen[n % seen.size()];
            }
            seen.push_back(next);
            cells = next;
        }
        return cells;
    }
};