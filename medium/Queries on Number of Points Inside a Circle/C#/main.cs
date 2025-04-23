// Problem: Queries on Number of Points Inside a Circle
// Link to the problem: https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/
public class Solution
{
    public int[] CountPoints(int[][] points, int[][] queries)
    {
        int[] ans = new int[queries.Length];
        for (int i = 0; i < queries.Length; i++)
        {
            for (int j = 0; j < points.Length; j++)
            {
                if ((queries[i][2] * queries[i][2]) >= ((queries[i][0] - points[j][0]) * (queries[i][0] - points[j][0])
                        + (queries[i][1] - points[j][1]) * (queries[i][1] - points[j][1])))
                {
                    ans[i]++;
                }
            }
        }
        return ans;
    }
}