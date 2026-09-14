// Problem: Rectangle Overlap
// Link to the problem: https://leetcode.com/problems/rectangle-overlap/
public class Solution
{
    public bool IsRectangleOverlap(int[] rec1, int[] rec2)
    {
        bool ans = (Math.Min(rec1[2], rec2[2]) > Math.Max(rec1[0], rec2[0])) && (Math.Min(rec1[3], rec2[3]) > Math.Max(rec1[1], rec2[1]));
        return ans;
    }
}