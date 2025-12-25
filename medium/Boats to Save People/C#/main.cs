// Problem: Boats to Save People
// Link to the problem: https://leetcode.com/problems/boats-to-save-people/
public class Solution
{
    public int NumRescueBoats(int[] people, int limit)
    {
        Array.Sort(people);
        int ans = 0, n = people.Length, i = 0, j = n - 1;
        while (i <= j)
        {
            if (people[i] + people[j] <= limit)
            {
                i++;
                j--;
            }
            else
            {
                j--;
            }
            ans++;
        }
        return ans;
    }
}