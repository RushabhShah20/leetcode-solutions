// Problem: Maximize Consecutive Elements in an Array After Modification
// Link to the problem: https://leetcode.com/problems/maximize-consecutive-elements-in-an-array-after-modification/
public class Solution
{
    public int MaxSelectedElements(int[] nums)
    {
        int n = nums.Length;
        Array.Sort(nums);
        int[] a = new int[1000001];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x = nums[i];
            a[x + 1] = Math.Max(a[x + 1], a[x] + 1);
            a[x] = Math.Max(a[x], a[x - 1] + 1);
            ans = Math.Max(ans, Math.Max(a[x], a[x + 1]));
        }
        return ans;
    }
}