// Problem: Replace Elements with Greatest Element on Right Side
// Link to the problem: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
public class Solution
{
    public int[] ReplaceElements(int[] arr)
    {
        List<int> ans = new List<int>();
        ans.Add(-1);
        int max = -1;
        if (arr.Length == 1)
        {
            return ans.ToArray();
        }
        else
        {
            for (int i = arr.Length - 1; i >= 1; i--)
            {
                if (max < arr[i])
                {
                    max = arr[i];
                }
                ans.Add(max);
            }
            ans.Reverse();
            return ans.ToArray();
        }
    }
}