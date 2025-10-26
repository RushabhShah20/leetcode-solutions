// Problem: Add to Array-Form of Integer
// Link to the problem: https://leetcode.com/problems/add-to-array-form-of-integer/
public class Solution
{
    public IList<int> AddToArrayForm(int[] num, int k)
    {
        IList<int> ans = new List<int>();
        for (int i = num.Length - 1; i >= 0; i--)
        {
            ans.Insert(0, (num[i] + k) % 10);
            k = (num[i] + k) / 10;
        }
        while (k > 0)
        {
            ans.Insert(0, k % 10);
            k /= 10;
        }
        return ans;
    }
}