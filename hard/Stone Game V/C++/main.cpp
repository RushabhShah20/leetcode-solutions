// Problem: Stone Game V
// Link to the problem: https://leetcode.com/problems/stone-game-v/
class Solution
{
public:
    vector<vector<int>> a, b, c;
    int stoneGameV(vector<int> &stoneValue)
    {
        const int n = stoneValue.size();
        a.assign(n, vector<int>(n));
        b.assign(n, vector<int>(n));
        c.assign(n, vector<int>(n));
        for (int l = n - 1; l >= 0; l--)
        {
            b[l][l] = c[l][l] = stoneValue[l];
            int x = stoneValue[l], y = 0;
            for (int r = l + 1, i = l - 1; r < n; r++)
            {
                x += stoneValue[r];
                while (i + 1 < r && (y + stoneValue[i + 1]) * 2 <= x)
                {
                    y += stoneValue[i + 1];
                    i++;
                }
                if (l <= i)
                {
                    a[l][r] = max(a[l][r], b[l][i]);
                }
                if (i + 1 < r)
                {
                    a[l][r] = max(a[l][r], c[i + 2][r]);
                }
                if (y * 2 == x)
                {
                    a[l][r] = max(a[l][r], c[i + 1][r]);
                }
                b[l][r] = max(b[l][r - 1], x + a[l][r]);
                c[l][r] = max(c[l + 1][r], x + a[l][r]);
            }
        }
        const int ans = a[0][n - 1];
        return ans;
    }
};