// Problem: Count Alternating Subarrays
// Link to the problem: https://leetcode.com/problems/count-alternating-subarrays/
public class Solution
{
    public long CountAlternatingSubarrays(int[] nums)
    {
        long ans = 0;
        int count = 1;
        List<int> a = new List<int>();
        for (int i = 1; i < nums.Length; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                count++;
            }
            else
            {
                a.Add(count);
                count = 1;
            }
        }
        a.Add(count);
        for (int i = 0; i < a.Count; i++)
        {
            ans += (((long)(a[i]) * (long)(a[i] + 1)) / 2);
        }
        return ans;
    }
}