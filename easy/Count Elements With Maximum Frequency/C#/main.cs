// Problem: Count Elements With Maximum Frequency
// Link to the problem: https://leetcode.com/problems/count-elements-with-maximum-frequency/
public class Solution
{
    public int MaxFrequencyElements(int[] nums)
    {
        Dictionary<int, int> x = new Dictionary<int, int>();
        for (int i = 0; i < nums.Length; i++)
        {
            if (x.ContainsKey(nums[i]))
            {
                x[nums[i]]++;
            }
            else
            {
                x[nums[i]] = 1;
            }
        }
        Dictionary<int, List<int>> y = new Dictionary<int, List<int>>();
        foreach (var i in x)
        {
            if (!y.ContainsKey(i.Value))
            {
                y[i.Value] = new List<int>();
            }
            for (int j = 0; j < i.Value; j++)
            {
                y[i.Value].Add(i.Key);
            }
        }
        int maxFreq = 0;
        foreach (var i in y)
        {
            maxFreq = Math.Max(maxFreq, i.Key);
        }
        List<int> ans = y[maxFreq];
        return ans.Count;
    }
}