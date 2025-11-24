// Problem: Binary Prefix Divisible By 5
// Link to the problem: https://leetcode.com/problems/binary-prefix-divisible-by-5/
public class Solution
{
    public IList<bool> PrefixesDivBy5(int[] nums)
    {
        int rem = 0;
        IList<bool> ans = new List<bool>();
        foreach (int num in nums)
        {
            rem = (2 * rem + num) % 5;
            if (rem == 0)
            {
                ans.Add(true);
            }
            else
            {
                ans.Add(false);
            }
        }
        return ans;
    }
}