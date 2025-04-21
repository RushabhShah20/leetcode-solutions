// Problem: Count Number of Distinct Integers After Reverse Operations
// Link to the problem: https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/
public class Solution
{
    public int rev(int n)
    {
        int rev = 0;
        while (n > 0)
        {
            rev = (rev * 10) + (n % 10);
            n /= 10;
        }
        return rev;
    }
    public int CountDistinctIntegers(int[] nums)
    {
        HashSet<int> s = new HashSet<int>();
        List<int> ans_list = new List<int>();
        int[] ans = (int[])nums.Clone();
        for (int i = 0; i < nums.Length; i++)
        {
            ans_list.Add(rev(nums[i]));
        }
        ans = ans.Concat(ans_list.ToArray()).ToArray();
        for (int i = 0; i < ans.Length; i++)
        {
            s.Add(ans[i]);
        }
        return s.Count;
    }
}