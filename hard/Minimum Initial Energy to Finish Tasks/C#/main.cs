// Problem: Minimum Initial Energy to Finish Tasks
// Link to the problem: https://leetcode.com/problems/minimum-initial-energy-to-finish-tasks/
public class Solution
{
    public int MinimumEffort(int[][] tasks)
    {
        Array.Sort(tasks, (a, b) => (a[1] - a[0]) - (b[1] - b[0]));
        int ans = 0;
        foreach (int[] task in tasks)
        {
            ans = Math.Max(ans + task[0], task[1]);
        }
        return ans;
    }
}