// Problem: Number of Employees Who Met the Target
// Link to the problem: https://leetcode.com/problems/number-of-employees-who-met-the-target/
public class Solution
{
    public int NumberOfEmployeesWhoMetTarget(int[] hours, int target)
    {
        int ans = 0;
        foreach (int hour in hours)
        {
            if (hour >= target)
            {
                ans++;
            }
        }
        return ans;
    }
}