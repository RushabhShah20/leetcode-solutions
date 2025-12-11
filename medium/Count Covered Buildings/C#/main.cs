// Problem: Count Covered Buildings
// Link to the problem: https://leetcode.com/problems/count-covered-buildings/
public class Solution
{
    public int CountCoveredBuildings(int n, int[][] buildings)
    {
        int[] maxRow = new int[n + 1], minRow = new int[n + 1], maxCol = new int[n + 1], minCol = new int[n + 1];
        Array.Fill(minCol, n + 1);
        Array.Fill(minRow, n + 1);
        foreach (int[] building in buildings)
        {
            int x = building[0], y = building[1];
            maxRow[y] = Math.Max(maxRow[y], x);
            minRow[y] = Math.Min(minRow[y], x);
            maxCol[x] = Math.Max(maxCol[x], y);
            minCol[x] = Math.Min(minCol[x], y);
        }
        int ans = 0;
        foreach (int[] building in buildings)
        {
            int x = building[0], y = building[1];
            if (x > minRow[y] && x < maxRow[y] && y > minCol[x] && y < maxCol[x])
            {
                ans++;
            }
        }
        return ans;
    }
}