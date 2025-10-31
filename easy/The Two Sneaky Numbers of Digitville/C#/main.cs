// Problem: The Two Sneaky Numbers of Digitville
// Link to the problem: https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/
public class Solution
{
    public int[] GetSneakyNumbers(int[] nums)
    {
        Dictionary<int, int> m = new Dictionary<int, int>();
        foreach (int num in nums)
        {
            if (m.ContainsKey(num))
            {
                m[num]++;
            }
            else
            {
                m[num] = 1;
            }
        }
        SortedSet<int> ans_set = new SortedSet<int>();
        foreach (int num in nums)
        {
            if (m[num] == 2)
            {
                ans_set.Add(num);
            }
        }
        int[] ans = new int[2];
        int i = 0;
        foreach (int num in ans_set)
        {
            ans[i++] = num;
        }
        return ans;
    }
}