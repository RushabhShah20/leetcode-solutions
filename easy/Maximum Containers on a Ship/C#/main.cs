// Problem: Maximum Containers on a Ship
// Link to the problem: https://leetcode.com/problems/maximum-containers-on-a-ship/
public class Solution
{
    public int MaxContainers(int n, int w, int maxWeight)
    {
        return ((int)(Math.Pow(n, 2) * w) <= maxWeight ? (int)(Math.Pow(n, 2)) : (maxWeight / w));
    }
}