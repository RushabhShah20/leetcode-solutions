// Problem: Keep Multiplying Found Values by Two
// Link to the problem: https://leetcode.com/problems/keep-multiplying-found-values-by-two/
public class Solution
{
    public int FindFinalValue(int[] nums, int original)
    {
        SortedSet<int> s = new SortedSet<int>();
        foreach (int num in nums)
        {
            s.Add(num);
        }
        while (s.Contains(original))
        {
            original = original * 2;
        }
        return original;
    }
}