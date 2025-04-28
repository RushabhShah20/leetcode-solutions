// Problem: Find Occurrences of an Element in an Array
// Link to the problem: https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/
public class Solution
{
    public int[] OccurrencesOfElement(int[] nums, int[] queries, int x)
    {
        List<int> ans = new List<int>(Enumerable.Repeat(-1, queries.Length));
        List<int> freq = new List<int>();
        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] == x)
            {
                freq.Add(i);
            }
        }
        for (int i = 0; i < ans.Count; i++)
        {
            if (queries[i] <= freq.Count)
            {
                ans[i] = freq[queries[i] - 1];
            }
        }
        return ans.ToArray();
    }
}