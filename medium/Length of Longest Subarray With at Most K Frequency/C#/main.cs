// Problem: Length of Longest Subarray With at Most K Frequency
// Link to the problem: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
public class Solution
{
    public int MaxSubarrayLength(int[] nums, int k)
    {
        int n = nums.Length, i = 0, j = 0, ans = 0;
        Dictionary<int, int> m = new Dictionary<int, int>();
        while (j < n)
        {
            if (!m.ContainsKey(nums[j]))
            {
                m[nums[j]] = 0;
            }
            m[nums[j]]++;
            while (m[nums[j]] > k && i < n)
            {
                m[nums[i]]--;
                i++;
            }
            ans = Math.Max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
}