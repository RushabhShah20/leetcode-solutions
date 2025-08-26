// Problem: Maximum Area of Longest Diagonal Rectangle
// Link to the problem: https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/
class Solution {
    public int areaOfMaxDiagonal(int[][] dimensions) {
        double maxDiagonal = -1.0;
        int maxArea = -1;
        for (int i = 0; i < dimensions.length; i++) {
            int l = dimensions[i][0], b = dimensions[i][1];
            double diagonal = Math.sqrt(1.0 * l * l + 1.0 * b * b);
            int area = l * b;
            if (diagonal > maxDiagonal) {
                maxDiagonal = diagonal;
                maxArea = area;
            } else if (diagonal == maxDiagonal) {
                maxArea = Math.max(area, maxArea);
            }
        }
        return maxArea;
    }
}