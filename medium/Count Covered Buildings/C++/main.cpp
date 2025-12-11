// Problem: Count Covered Buildings
// Link to the problem: https://leetcode.com/problems/count-covered-buildings/
class Solution
{
public:
    int countCoveredBuildings(int n, vector<vector<int>> &buildings)
    {
        vector<int> maxRow(n + 1, 0), minRow(n + 1, n + 1), maxCol(n + 1, 0), minCol(n + 1, n + 1);
        for (const vector<int> &building : buildings)
        {
            int x = building[0], y = building[1];
            maxRow[y] = max(maxRow[y], x);
            minRow[y] = min(minRow[y], x);
            maxCol[x] = max(maxCol[x], y);
            minCol[x] = min(minCol[x], y);
        }
        int ans = 0;
        for (const vector<int> &building : buildings)
        {
            int x = building[0], y = building[1];
            if (x > minRow[y] && x < maxRow[y] && y > minCol[x] && y < maxCol[x])
            {
                ans++;
            }
        }
        return ans;
    }
};