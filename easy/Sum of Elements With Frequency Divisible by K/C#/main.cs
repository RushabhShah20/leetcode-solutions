// Problem: Sum of Elements With Frequency Divisible by K
// Link to the problem: https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/
public class Solution
{
    public int SumDivisibleByK(int[] nums, int k)
    {
        Dictionary<int, int> m = new Dictionary<int, int>();
        foreach (int num in nums)
        {
            if (m.ContainsKey(num))
            {
                m[num]++;
            }
            else
            {
                m[num] = 1;
            }
        }
        int ans = 0;
        foreach (KeyValuePair<int, int> i in m)
        {
            if (i.Value % k == 0)
            {
                ans += (i.Key * i.Value);
            }
        }
        return ans;
    }
}