// Problem: Container With Most Water
// Link to the problem: https://leetcode.com/problems/container-with-most-water/
public class Solution
{
    public int MaxArea(int[] height)
    {
        int ans = 0, n = height.Length;
        int left = 0, right = n - 1;
        while (left <= right)
        {
            int vol = (right - left) * Math.Min(height[left], height[right]);
            ans = Math.Max(ans, vol);
            if (height[left] <= height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return ans;
    }
}