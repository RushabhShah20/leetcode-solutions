// Problem: Find Lucky Integer in an Array
// Link to the problem: https://leetcode.com/problems/find-lucky-integer-in-an-array/
public class Solution
{
    public int FindLucky(int[] arr)
    {
        Dictionary<int, int> m = new Dictionary<int, int>();
        for (int i = 0; i < arr.Length; i++)
        {
            if (m.ContainsKey(arr[i]))
            {
                m[arr[i]]++;
            }
            else
            {
                m[arr[i]] = 1;
            }
        }
        List<int> a = new List<int>();
        foreach (var kvp in m)
        {
            if (kvp.Value == kvp.Key)
            {
                a.Add(kvp.Value);
            }
        }
        return a.Count == 0 ? -1 : a.Max();
    }
}