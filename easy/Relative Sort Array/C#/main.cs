// Problem: Relative Sort Array
// Link to the problem: https://leetcode.com/problems/relative-sort-array/
public class Solution
{
    public int[] RelativeSortArray(int[] arr1, int[] arr2)
    {
        SortedDictionary<int, int> m = new SortedDictionary<int, int>();
        foreach (int a in arr1)
        {
            if (m.ContainsKey(a))
            {
                m[a]++;
            }
            else
            {
                m[a] = 1;
            }
        }
        List<int> ans = new List<int>();
        for (int i = 0; i < arr2.Length; i++)
        {
            for (int j = 0; j < m[arr2[i]]; j++)
            {
                ans.Add(arr2[i]);
            }
            m.Remove(arr2[i]);
        }
        foreach (System.Collections.Generic.KeyValuePair<int, int> i in m)
        {
            for (int j = 0; j < i.Value; j++)
            {
                ans.Add(i.Key);
            }
        }
        return ans.ToArray();
    }
}