// Problem: Sort Array By Parity
// Link to the problem: https://leetcode.com/problems/sort-array-by-parity/
public class Solution
{
    public int[] SortArrayByParity(int[] nums)
    {
        List<int> ans = new List<int>(), even = new List<int>(), odd = new List<int>();
        foreach (int num in nums)
        {
            if (num % 2 == 0)
            {
                even.Add(num);
            }
            else
            {
                odd.Add(num);
            }
        }
        foreach (int num in even)
        {
            ans.Add(num);
        }
        foreach (int num in odd)
        {
            ans.Add(num);
        }
        return ans.ToArray();
    }
}