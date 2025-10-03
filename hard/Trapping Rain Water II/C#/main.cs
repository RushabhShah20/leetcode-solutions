// Problem: Trapping Rain Water II
// Link to the problem: https://leetcode.com/problems/trapping-rain-water-ii/
public class Solution
{
    public int TrapRainWater(int[][] heightMap)
    {
        int m = heightMap.Length;
        int n = heightMap[0].Length;
        int[,] vols = new int[m, n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                vols[i, j] = heightMap[i][j];
            }
        }
        bool upt = true;
        bool init = true;
        while (upt)
        {
            upt = false;
            for (int i = 1; i < m - 1; i++)
            {
                for (int j = 1; j < n - 1; j++)
                {
                    int val = Math.Max(heightMap[i][j], Math.Min(vols[i - 1, j], vols[i, j - 1]));
                    if (init || vols[i, j] > val)
                    {
                        vols[i, j] = val;
                        upt = true;
                    }
                }
            }
            init = false;
            for (int i = m - 2; i >= 1; i--)
            {
                for (int j = n - 2; j >= 1; j--)
                {
                    int val = Math.Max(heightMap[i][j], Math.Min(vols[i + 1, j], vols[i, j + 1]));
                    if (vols[i, j] > val)
                    {
                        vols[i, j] = val;
                        upt = true;
                    }
                }
            }
        }
        int ans = 0;
        for (int i = 1; i < m - 1; i++)
        {
            for (int j = 1; j < n - 1; j++)
            {
                if (vols[i, j] > heightMap[i][j])
                {
                    ans += vols[i, j] - heightMap[i][j];
                }
            }
        }
        return ans;
    }
}