// Problem: Maximum Height of a Triangle
// Link to the problem: https://leetcode.com/problems/maximum-height-of-a-triangle/
public class Solution
{
    public int MaxHeightOfTriangle(int red, int blue)
    {
        int x = 0, y = 0;
        int a = red, b = blue;
        int i = 1;
        while (a >= 0 && b >= 0)
        {
            if (i % 2 == 0)
            {
                a -= i;
                x++;
            }
            else
            {
                b -= i;
                x++;
            }
            i++;
        }
        a = red;
        b = blue;
        i = 1;
        while (a >= 0 && b >= 0)
        {
            if (i % 2 == 0)
            {
                b -= i;
                y++;
            }
            else
            {
                a -= i;
                y++;
            }
            i++;
        }
        int ans = Math.Max(x - 1, y - 1);
        return ans;
    }
}