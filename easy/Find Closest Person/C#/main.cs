// Problem: Find Closest Person
// Link to the problem: https://leetcode.com/problems/find-closest-person/
public class Solution
{
    public int FindClosest(int x, int y, int z)
    {
        if (Math.Abs(x - z) < Math.Abs(y - z))
        {
            return 1;
        }
        else if (Math.Abs(x - z) > Math.Abs(y - z))
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
}