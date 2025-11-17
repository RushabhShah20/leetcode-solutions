// Problem: Check If All 1's Are at Least Length K Places Away
// Link to the problem: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
public class Solution
{
    public bool KLengthApart(int[] nums, int k)
    {
        List<int> pos = new List<int>();
        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] == 1)
            {
                pos.Add(i);
            }
        }
        int minDiff = 1000000000;
        if (pos.Count == 0)
        {
            return true;
        }
        else
        {
            for (int i = 1; i < pos.Count; i++)
            {
                minDiff = Math.Min(minDiff, Math.Abs(pos[i] - pos[i - 1] - 1));
            }
            if (minDiff < k)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
}