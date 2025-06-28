// Problem: Find the Peaks
// Link to the problem: https://leetcode.com/problems/find-the-peaks/
public class Solution
{
    public IList<int> FindPeaks(int[] mountain)
    {
        IList<int> ans = new List<int>();
        for (int i = 1; i < mountain.Length - 1; i++)
        {
            if (mountain[i] > mountain[i + 1] && mountain[i] > mountain[i - 1])
            {
                ans.Add(i);
            }
        }
        return ans;
    }
}