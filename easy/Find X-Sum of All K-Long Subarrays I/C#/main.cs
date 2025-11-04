// Problem: Find X-Sum of All K-Long Subarrays I
// Link to the problem: https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i/
public class Solution
{
    public int[] FindXSum(int[] nums, int k, int x)
    {
        int n = nums.Length;
        List<int> ans = new List<int>();
        Dictionary<int, int> m = new Dictionary<int, int>();
        for (int i = 0; i < n; i++)
        {
            if (i >= k)
            {
                if (!m.ContainsKey(nums[i]))
                {
                    m[nums[i]] = 0;
                }
                m[nums[i]]++;
                m[nums[i - k]]--;
                if (m[nums[i - k]] == 0)
                {
                    m.Remove(nums[i - k]);
                }
            }
            else
            {
                if (!m.ContainsKey(nums[i]))
                {
                    m[nums[i]] = 0;
                }
                m[nums[i]]++;
            }
            if (i >= k - 1)
            {
                List<KeyValuePair<int, int>> v = new List<KeyValuePair<int, int>>(m);
                v.Sort((a, b) =>
                {
                    if (a.Value == b.Value)
                    {
                        return b.Key.CompareTo(a.Key);
                    }
                    else
                    {
                        return b.Value.CompareTo(a.Value);
                    }
                });
                int sum = 0;
                for (int j = 0; j < Math.Min(x, v.Count); j++)
                {
                    sum += (v[j].Key * v[j].Value);
                }
                ans.Add(sum);
            }
        }
        return ans.ToArray();
    }
}