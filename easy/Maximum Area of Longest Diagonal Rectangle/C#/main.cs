// Problem: Maximum Area of Longest Diagonal Rectangle
// Link to the problem: https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/
public class Solution
{
    public int AreaOfMaxDiagonal(int[][] dimensions)
    {
        double maxDiagonal = -1.0;
        int maxArea = -1;
        for (int i = 0; i < dimensions.Length; i++)
        {
            int l = dimensions[i][0], b = dimensions[i][1];
            double diagonal = Math.Sqrt(1.0 * l * l + 1.0 * b * b);
            int area = l * b;
            if (diagonal > maxDiagonal)
            {
                maxDiagonal = diagonal;
                maxArea = area;
            }
            else if (diagonal == maxDiagonal)
            {
                maxArea = Math.Max(area, maxArea);
            }
        }
        return maxArea;
    }
}