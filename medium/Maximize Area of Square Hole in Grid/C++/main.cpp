// Problem: Maximize Area of Square Hole in Grid
// Link to the problem: https://leetcode.com/problems/maximize-area-of-square-hole-in-grid/
class Solution
{
public:
    int maximizeSquareHoleArea(int n, int m, vector<int> &hBars, vector<int> &vBars)
    {
        const int p = hBars.size(), q = vBars.size();
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());
        int hmax = 1, hcur = 1, vmax = 1, vcur = 1;
        for (int i = 1; i < p; i++)
        {
            if (hBars[i] == hBars[i - 1] + 1)
            {
                hcur++;
            }
            else
            {
                hcur = 1;
            }
            hmax = max(hmax, hcur);
        }
        for (int i = 1; i < q; i++)
        {
            if (vBars[i] == vBars[i - 1] + 1)
            {
                vcur++;
            }
            else
            {
                vcur = 1;
            }
            vmax = max(vmax, vcur);
        }
        int s = min(hmax, vmax) + 1;
        const int ans = s * s;
        return ans;
    }
};