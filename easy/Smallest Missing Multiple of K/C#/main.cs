// Problem: Smallest Missing Multiple of K
// Link to the problem: https://leetcode.com/problems/smallest-missing-multiple-of-k/
public class Solution
{
    public int MissingMultiple(int[] nums, int k)
    {
        int n = nums.Length;
        HashSet<int> s = new HashSet<int>();
        for (int i = 0; i < n; i++)
        {
            s.Add(nums[i]);
        }
        int ans = k;
        while (s.Contains(ans))
        {
            ans += k;
        }
        return ans;
    }
}