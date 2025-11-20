// Problem: Set Intersection Size At Least Two
// Link to the problem: https://leetcode.com/problems/set-intersection-size-at-least-two/
public class Solution
{
    public int IntersectionSizeTwo(int[][] intervals)
    {
        Array.Sort(intervals, (a, b) => { return ((a[1] == b[1]) ? (b[0] - a[0]) : (a[1] - b[1])); });
        int ans = 0;
        int a = -1, b = -1;
        foreach (int[] interval in intervals)
        {
            int l = interval[0], r = interval[1];
            if (l > b)
            {
                a = r - 1;
                b = r;
                ans += 2;
            }
            else if (l > a)
            {
                a = b;
                b = r;
                ans += 1;
            }
        }
        return ans;
    }
}